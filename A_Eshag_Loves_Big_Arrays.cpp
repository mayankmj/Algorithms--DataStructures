#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],c=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        sort(arr,arr+n);
        int max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==max)
            c++;
        }
        cout<<n-c<<endl;
    }
    return 0;
}