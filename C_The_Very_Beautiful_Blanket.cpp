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



ll generateNumber(ll n,ll m) {
    return (n / 2) * 10 + (n % 2) * 2 + (m % 2) * 1 + (m / 2) * 8;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,m; cin>>n>>m;
    ll arr[n][m] , ans = 0; 
    // cout<<n*m<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            // if(j%2 == 0 && j>0) ans+=2;
            // arr[i][j]=ans;
            // ans++;
            arr[i][j] = generateNumber(i+1,j+1);
        }
        // ans+=2;
    }
    vector<ll>vec(1,1);
    map<ll,ll>mpp;
     ll cnt = 10, pt = 1,extra=1,tt=1;
     set<ll>ss;
    cout << n*m << endl;
    ll i = n;
    for(int j=i;j>0;j--)
    {
        ll tt = vec[0];
        for (int i = 10; i < 100; i=i+10)
            tt *= 2;
        for (int j = 0; j < m; j++)
            cout << (j + extra + tt) << " ";
        vec[0]++;
        cout << endl;
        mpp[tt]++;
        ss.insert(tt);
    }
}
return 0;
}
