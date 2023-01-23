#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,k,a=0;
        cin>>n>>m>>k;
        long long int arr[k],same[k];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<k;j++)
            {
                if(arr[i]==arr[j] && arr[i]<n)
                {
                    same[a]=arr[i];
                    a++;
                }
            }
        }
        sort(same,same+a);
        cout<<m;
        for(int i=0;i<a;i++)
        {
            cout<<same[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}