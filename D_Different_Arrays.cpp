#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
// #define MOD 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define print(vec) for(auto &x:vec) cout<<x<< 
const ll MOD = 998244353;
 
const ll T = 300 * 300;
const ll SZ = 2 * T + 10;
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}

ll dp[300][SZ];
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}



// ll ans_finder(vector<ll>&vec , ll index , ll curr ,ll n)
// {
//     if(index == n) return 1;
//     if(curr == 0 ) return (ans_finder(vec,index+1,curr,n) % mod);

//     return ( ans_finder(vec,index+1,curr+vec[index+1],n) %mod) + (ans_finder(vec,index+1,curr-vec[index+1],n)%mod);
// }

int32_t main(){
fast
ll t=1;
// cin>>t;
while(t--){
    ll n;
    cin >> n;
    vector<ll>a(n+1);
  for (ll i = 1; i <= n; ++i) cin >> a[i];
 
  dp[0][a[2]] = 1;
  for (ll i = 0; i < n - 2; ++i) {
    for (ll j = 0; j <= 2 * T; ++j) {
      ll v = j;
      if (j > T) v = T - j;
 
      if (j == 0 || j == T) {
        dp[i + 1][a[i + 3]] += dp[i][j];
      } else {
        ll s1 = a[i + 3] - v;
        ll s2 = a[i + 3] + v;
 
        if (s1 < 0) s1 = T - s1;
        if (s2 < 0) s2 = T - s2;
 
        dp[i + 1][s1] += dp[i][j];
        dp[i + 1][s1] %= MOD;
 
        dp[i + 1][s2] += dp[i][j];
        dp[i + 1][s2] %= MOD;
      }
    }
  }
 
  ll ans = 0;
  for (ll j = 0; j <= 2 * T; ++j) {
    ans = (ans + dp[n - 2][j]) % MOD;
  }
  cout << ans << endl;
}
return 0;
}
