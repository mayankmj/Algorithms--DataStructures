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
    string s; cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    ll ans=n;
    for(int i=0;i<n;i++)
    {
        if(s[i] == temp[i]) ans--;
    }
    cout<<ans<<endl;
}    
}