#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ll t=1;
cin>>t;
while(t--)
{
    string s; cin>>s;
    map<char,ll>mpp;
    ll ans=s.size();
    for(auto &x:s)
    {
        mpp[x]++;
    }
    for(auto &x:mpp)
    {
        if(x.second>2){
            ans = ans - (x.second)+2;
        }
    }
    cout<<ans/2<<endl;
}    
}