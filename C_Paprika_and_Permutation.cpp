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
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}





int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    vector<ll>vec(n),v,big,no(n); cin>>vec;
    ll count=0,flag=0,j=1;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++) no[i]=i+1;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>n) big.pb(vec[i]);
        else if(no[vec[i]-1]==-1) big.pb(vec[i]);
        else no[vec[i]-1]=-1;
    }
    for(int i=0;i<n;i++){
        if(no[i]!=-1) v.push_back(no[i]);
    }
    sort(v.begin(),v.end(),greater<ll>());
    sort(big.begin(),big.end(),greater<ll>());
    if(big.size()==0) cout<<v.size()<<endl;
    else {
        // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        ll temp=big[i]/2;
        if(big[i]%2==0) temp--;
        if(temp>=v[i]) count++;
        else {
            flag=1; break;
        }
    }
    if(flag==1) cout<<"-1"<<endl;
    else cout<<count<<endl;}
}
return 0;
}
