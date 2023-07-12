#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(s == "^"){cout<<"1"<<endl; continue;}
        ll n=s.size();
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == s[i+1] && s[i] == '_') ans++;
        }
         if(s[0] == '_') ans++;
         if(s[n-1] == '_') ans++;
         cout<<ans<<endl;
    }
}