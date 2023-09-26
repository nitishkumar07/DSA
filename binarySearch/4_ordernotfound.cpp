#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        if(a[0]==key)
            cout<<0;
        else
            cout<<"element not found";
        return 0;
    }
    int flag= a[0]<=a[1]?0:1;
    int first=0,last=n-1;
    int mid;
    if(flag==0)
    {
        while(first<last)
        {
            mid=first + (last-first)/2;
            if(a[mid]==key)
            {
                cout<<mid+1;
                return 0;
            }
            else if(a[mid]>key)
                last=mid-1;
            else
                first=mid+1;
        }

    }
    else
    {
        while(first<last)
        {
                 
        mid=first + (last-first)/2;
        if(a[mid]==key)
        {
            cout<<mid+1;
            return 0;
        }
        else if(a[mid]>key)
            first=mid+1;
        else
            last=mid-1;
        }
    }
    cout<<"emement not found";
    return 0;
}
