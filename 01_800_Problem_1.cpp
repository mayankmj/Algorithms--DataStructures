#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll temp=n/3;
        if(n%3 == 0) cout<<temp<<" "<<temp<<endl;
        else if(n%3 == 1) cout<<temp+1<<" "<<temp<<endl;
        else cout<<temp<<" "<<temp+1<<endl;
    }

}