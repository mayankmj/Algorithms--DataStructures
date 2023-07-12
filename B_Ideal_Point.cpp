#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    cin>>t;
while(t--)
{
    ll n,k; cin>>n>>k;
    map<ll,ll>mpp;
    for(int i=0;i<n;i++)
    {
        ll a,b; cin>>a>>b;
        if(a<=k && b>=k){
            for(int j=a;j<=b;j++) mpp[j]++;
        }
    }
    ll mx=0;
    for(auto &x:mpp)
    {
        // cout<<x.first<<" "<<x.second<<endl;
        if(x.first == k) continue;
        mx=max(mx,x.second);
    }
    // cout<<mpp[k]<<" "<<mx<<endl;
    if(mx < mpp[k]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}