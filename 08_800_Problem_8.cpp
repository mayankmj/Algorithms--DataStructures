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
    ll sum=vec[0]|vec[1];
    for(int i=2;i<n;i++)
    {
        sum=sum|vec[i];
    }
    cout<<sum<<endl;
}    
}