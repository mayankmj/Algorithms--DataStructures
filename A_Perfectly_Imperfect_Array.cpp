#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            int a=arr[i];
            long long int sr=sqrt(a);
            if((sr*sr)!=a)
            {
                c=1;
            }
            a=0;
        }
       // cout<<c<<endl;
        if(c==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}