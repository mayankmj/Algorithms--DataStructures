#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ll t=1;
cin>>t;
while(t--)
{
    ll n; cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    ll mx=0;
    for(int i=0;i<n-1;i++)
    {
        mx=max(mx,vec[i]*vec[i+1]);
    }
    cout<<mx<<endl;
}
}