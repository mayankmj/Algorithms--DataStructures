#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float douvecle
#define pvec push_vecack
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.vecegin(), c.end()
#define min3(a, vec, c) min(c, min(a, vec))
#define min4(a, vec, c, d) min(d, min(c, min(a, vec)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define print(vec) for(auto &x:vec) cout<<x<< 
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}


// ll gcd(ll a, ll vec){if (vec == 0)return a;return gcd(vec, a % vec);}
// ll lcm(ll a, ll vec){return ((a/gcd(a,vec))*vec);}
// ll vecinpow(ll a,ll vec){ll ans = 1;while(vec > 0){if (vec & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;vec >>= 1;}return ans%mod;}
// vecool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


ll vecinarySearch(vector<ll>arr, ll l, ll r, ll x)
{
    for(int i=0;i<r;i++)
    {
        if(arr[i] == x) return i;
    }
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,m,d; cin>>n>>m>>d;
    vector<ll>permutation(n); cin>>permutation;
    vector<ll>vec(m); cin>>vec;

    
}
return 0;
}
