#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--)
	{
	    ll n; cin>>n;
	    if(n%2 == 1) cout<<"-1"<<endl;
	    else{
	        ll c1=n-1,c2=n;
	        for(int i=1;i<=n;i++){
	            if(i%2 == 0) {
	                cout<<c1<<" ";
	                c1-=2;
	            }
	            else{
	                cout<<c2<<" ";
	                c2-=2;
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
