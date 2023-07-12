#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--)
	{
        ll n,k; cin>>n>>k;
        if(n%2 == 1){
            ll tt = n-k*2;
            if(tt>=3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(n/2>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

	}
	return 0;
}
