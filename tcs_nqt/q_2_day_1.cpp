#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,t,d; cin>>n>>t>>d;
    vector<ll>vec(n);
    map<ll,ll>mpp;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    ll ans=INT_MAX;
    for(int i=0;i<d;i++) mpp[vec[i]]++;
    ll tt1=mpp.size();
    ans=min(ans,tt1);
    for(int i=d;i<n;i++)
    {
        if(mpp[vec[i-d]] == 1) mpp.erase(mpp.find(vec[i-d]));
        else mpp[vec[i-d]]--;
        mpp[vec[i]]++;
        ll tt1=mpp.size();
        ans=min(ans,tt1);
        
    }
    cout<<ans<<endl;
    
}