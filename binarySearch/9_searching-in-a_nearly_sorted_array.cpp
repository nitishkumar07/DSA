#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0,end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            cout<<mid<<"\n";
            return 0;
        }
        else if(mid-1>=start && a[mid-1]==key)
        {
            cout<<mid-1<<"\n";
            return 0;
        }
        else if(mid+1<=end && a[mid+1]==key)
        {
            cout<<mid+1<<"\n";
            return 0;
        }
        else if(a[mid]<key)
        {
            start=mid+2;
        }
        else
            end=mid-2;
    }
    cout<<"element not found\n";
    return 0;
}
