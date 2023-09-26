#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0,end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int nxt=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(a[mid]<=a[nxt] && a[mid]<=a[prev])
        {
            cout<<mid<<"\n";
            return 0;
        }
        else if(a[mid]<=a[end])
            end=mid-1;
        else if(a[mid]>=a[start])
            start=mid+1;
    }
    return 0;
}
