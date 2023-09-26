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
    int res;
    while(start<end)
    {
        mid=start + (end-start)/2;
        if(a[mid]==key)
        {
            res=mid;
            end=mid-1; //if we want to find last occurance then here we have to change this line to first=mid+1;

        }
        else if(key<a[mid])
            end=mid-1;
        else
            start=mid+1;

    }
    cout<<res<<"\n";
    return 0;
}
