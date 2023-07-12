#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    cin>>t;
while(t--)
{
    ll n,m; cin>>n>>m;
    ll neg=0,z=0,sum=0,mn=INT_MAX;
    for(int i=0;i<n*m;i++)
    {
        ll tt; cin>>tt;
        if(!tt) z++;
        else if(tt<0) neg++;
        sum+=abs(tt);
        mn=min(mn,abs(tt));
    }
    if(neg%2 == 0 || z>0) cout<<sum<<endl;
    else cout<<sum-2*mn<<endl;
 }
}