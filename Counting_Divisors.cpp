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
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<ll>vec;
ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll printDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            vec.pb(i);
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
           vec.pb(n/i);
    }
    return(vec.size());
}
void solve()
{
    
}
int32_t main(){
fast
ll t=1;
cin>>t;
ll range=1e6;
    vector<ll>vec(range,0);
    for(int i=1;i<=range;i++){
        for(int j=i;j<=range;j+=i){
            vec[j]++;
        }
    }
while(t--){
    // ll n;
    // cin>>n;
    // s.insert(1);
    // s.insert(n);
    // ll ans=2;
    // for(int i=2;i*i<n;i++){
    //     if(n%i==0){
    //     ans+=2;
    //     }
    // }
    // ll x=(sqrt(n));
    // if(n%x==0)
    // ans++;
    // cout<<ans<<"\n";
    //solve();
    ll n;
    cin>>n;
    cout<<vec[n]<<endl;
}
return 0;
}
