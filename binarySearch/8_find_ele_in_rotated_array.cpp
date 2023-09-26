#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0,end=n-1;
    int mid;
    int pivot;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(a[mid]<=a[next] && a[mid]<=a[prev])
        {
            pivot=mid;
            break;
        }
        else if(a[mid]<=a[end])
            end=mid-1;
        else if(a[mid]>a[start])
            start=mid+1;
    }
    cout<<pivot<<"\n";
    int x=binarySearch(a,0,pivot-1,key); // here we should give 0 as start if we write start and end we get wrong as value of it would have changed
    int y=binarySearch(a,pivot,n-1,key);
    cout<<x<<" "<<y<<"\n";
    if(x==-1 && y==-1)
        cout<<"element not found\n";
    else if(x!=-1)
        cout<<x<<"\n";
    else if(y!=-1)
        cout<<y<<"\n";
    return 0;
}
