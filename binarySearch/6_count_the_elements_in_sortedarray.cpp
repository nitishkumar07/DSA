#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    int start=0,last=n-1,mid,ans1,ans2;
    while(start<=last)
    {
        mid=start+(last-start)/2;
        if(a[mid]==key)
        {
            ans1=mid;
            last=mid-1;
        }
        else if(a[mid]>key)
            last=mid-1;
        else
            start=mid+1;
    }
    cout<<ans1<<"\n";
    start=0;
    last=n-1;
    while(start<=last)
    {
        mid=start+(last-start)/2;
        if(a[mid]==key)
        {
            ans2=mid;
            start=mid+1;

        }
        else if(a[mid]>key)
            last=mid-1;
        else
            start=mid+1;
    }
    cout<<ans2<<"\n";
    cout<<ans2-ans1+1<<"\n";
    return 0;

}
