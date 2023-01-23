#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
 
    return true;
}


int main() {
	    ll n,ans=0;;
	    cin>>n;
	   // if(n==1) cout<<"0"<<endl;
	   // else if(n==2) cout<<"1"<<endl<<"2"<<endl;
	   // else{
	   // bitset<500001> Primes;
	   // Primes[0] = 1;
    //     for (int i = 3; i*i <= n; i += 2) {
    //       if (Primes[i / 2] == 0) {
    //           for (int j = 3 * i; j <= n; j += 2 * i)
    //               Primes[j / 2] = 1;
    //         }
    //      }
    //      vector<ll>prime;
    //      for (int i = 1; i <= n; i++) {
    //       if (i == 2)
    //         prime.push_back(i);
    //       else if (i % 2 == 1 && Primes[i / 2] == 0)
    //         prime.push_back(i);
    //      }
    //      vector<ll>all;
    //      for(int i=0;i<n;i++)
    //      {
    //          all.push_back(i+1);
    //      }
    //      ll j=0,count=0;
    //      vector<ll>vec;
    //      vector<ll>v;
    //       ll s=prime.size();
    //      for(int i=0;i<s;i++)
    //      {
    //          for(int j=i+1;j<s;j++)
    //          {
    //              v.push_back(prime[i]*prime[j]);
    //          }
    //      }
    //      ll ss=v.size();
    //      for(int i=0;i<n;i++)
    //      {
    //          if(all[i]!=1 && all[i]!=v[j])
    //          {
    //              vec.push_back(all[i]);
    //              count++;
    //          }
    //          if(all[i]==v[j] && j<(ss-1))
    //          j++;
    //      }
    //      cout<<count<<endl;
         
    //      for(auto x:vec){
    //          if(x!=0)
    //      cout<<x<<" ";
    //      }
	   // }
	   vector<ll>prime;
	   for(int i=2;i<=n;i++)
	   {
	       if(isPrime(i)==true)
	       prime.push_back(i);
	   }
	   map<ll,ll>mp;
	   for(auto x:prime)
	   {
	       ll last=n/x;
	       for(int i=1;i<=last;i++)
	       {
	           mp[x*i]++;
	       }
	   }
	   vector<ll>vec;
	   ll count=0;
    //    for(auto x:prime)
    //    cout<<x<<" ";
	   for(auto x:mp)
	   {
	       if(x.second==1)
	       {
	           ll s=x.first;
              // cout<<s<<" ";
	           vec.push_back(s);
	           count++;
	       }
	   }
	   cout<<count<<endl;
	   for(auto x:vec)
	   cout<<x<<" ";
	   

	return 0;
}
