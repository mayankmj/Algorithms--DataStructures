#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
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
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}


ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


ll minSumPathUtil(ll i, ll j,vector<vector<ll>> &vec,vector<vector<ll>> &dp)
{
  if(i==0 && j == 0)
    return vec[0][0];
  if(i<0 || j<0)
    return 0;
  if(dp[i][j]!=-1) return dp[i][j];
    
  ll up = vec[i][j] + minSumPathUtil(i-1,j,vec,dp);
  ll left = vec[i][j] + minSumPathUtil(i,j-1,vec,dp);
  
  return dp[i][j] = max(up,left);
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    // vector<vector<ll>>vec(n,vector<ll>(n,0));
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<n;j++)
    //     {
    //         vec[i][j]=(i+1)*(j+1);
    //     }
    // }
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<n;j++) cout<<vec[i][j]<<" ";
    //     cout<<endl;
    // }
    //  vector<vector<ll> > dp(n,vector<ll>(n,-1));
    unsigned long long int sum=0;
    ll temp1=binpow(6,mod-2),temp2=binpow(3,mod-2);
    // for(int i=1;i<=n;i++)
    // {
        // unsigned ll int aa = ((i%mod)*(i%mod))%mod;

        // }
    ll a=n-1;
    sum = ((a*(a+1)*(2*a+1))/6)%mod + ((a*(a+1)*(2*a+1))/6)%mod + a*(a+1)/2 + (n*n)%mod;
    // sum = ((n*(n+1))*(4*n-1))/6;
    //  ll ans=minSumPathUtil(n-1,n-1,vec,dp);
    unsigned long long int m=2022;
    //  cout<<sum<<endl
    ll tt=2*n+1,ttt=n+1;
    vector<ll>vv;
     ll  sqq = ((n*(ttt)%mod*(tt)%mod*2022%mod)*temp1);
     ll addq = ((n-1)*(n)%mod*(ttt)%mod*2022%mod*temp2);
     vv.push_back(sqq); vv.pb(addq);
     cout<<((vv[0]+vv[1])%mod)%mod<<endl;

}
return 0;
}
