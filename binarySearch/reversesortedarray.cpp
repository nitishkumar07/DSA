#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int first=0,last=n-1;
    int mid;
    while(first<last)
    {
        mid=first + (last-first)/2;
        if(arr[mid]==key)
        {
            
            cout<<mid+1<<"\n";
            return 0;
        }
        else if(arr[mid]>key)
        {
            first=mid+1;
        }
        else
            last=mid-1;

    }
   cout<<"element not present\n"; 
}
