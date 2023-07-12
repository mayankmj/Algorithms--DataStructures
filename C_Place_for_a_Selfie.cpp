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

bool check(ll x, ll y, ll w, ll z) {
    ll delta = (x - y) * (x - y) - 4 * w * z;
    if (delta < 0) {
        return true;
    }
    return false;   
}
int32_t main(){
fast
ll t=1;
cin>>t;
    while (t--) {
         ll n,m;cin>>n>>m;
      ll a[n]; for(int i=0;i<n;i++){cin>>a[i];};
    ll b[m],c[m],d[m]; for(int i=0;i<m;i++){cin>>b[i]; cin>>c[i]; cin>>d[i];};
    sort(a,a+n);
 auto check = [&](ll x,ll y, ll w, ll z){
        vector<ll>vv(1); vv[0]=(x-y)*(x-y)-4*w*z;
        if(vv[0]<0)
            return true;
        else         
        return false;
    };
    for(int i=0;i<m;i++){
        auto k=upper_bound(a,a+n,c[i])-a;
        if(k!=n){
            bool tt2=check(c[i],a[k],b[i],d[i]);
            if(tt2){
                cout<<"Yes"<<endl;
                cout<<a[k]<<endl;
                continue;
            }
        }
        vector<ll>vvv1;
         auto j=lower_bound(a,a+n,c[i])-a;
         vector<bool>temp(1); temp[0]=check(c[i],a[j],b[i],d[i]);
         vvv1.pb(b[i]);
        if(j<n && temp[0]){
            cout<<"Yes"<<endl;
            cout<<a[j]<<endl;
            continue;
        }
        if(j<=0) {
            cout<<"No"<<endl;
            continue;
         }
        if(j){
            if(check(c[i],a[j-1],b[i],d[i])){
                cout<<"Yes"<<endl;
                cout<<a[j-1]<<endl;
                continue;
            }
        }
        vvv1.pop_back();
        cout<<"No"<<endl;
    }
    }
    return 0;

}
