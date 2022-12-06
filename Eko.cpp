#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int hsh[N];

int main()
{
    long long int n, m;
    cin>>n>>m;
    long long int sum=0, arr[n], maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxx=max(maxx,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        hsh[arr[i]]++;
    }
    for(int i=maxx-1;i;i--)
    {
        hsh[i]+=hsh[i+1];
    }
    int ans;
    for(int i=maxx;sum || i<m;i--)
    {
        sum+=hsh[i];
        ans=i-1;
    }
    cout<<ans;
    return 0;
}