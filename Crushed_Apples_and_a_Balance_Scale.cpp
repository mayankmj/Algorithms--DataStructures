#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans*a);a =(a*a);b >>= 1;}return ans;}
int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--)
	{
        // m->i have 
        // n -> to make
        ll m,n; cin>>m>>n;
        if(n>m) cout<<"NO"<<endl;
        else if(m ==n) cout<<"YES"<<endl;
        else{
            ll flag=0;
            while(m%2 == 0)
            {
                m/=2;
                if(n%m == 0) {
                    flag=1;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}
	return 0;
}
