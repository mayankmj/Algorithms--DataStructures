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
    ll n,k,b,s; cin >> n >> k >> b >> s;
    ll left=b*k,right=b*k+n*(k-1);
    if(s>=left && s<=right) {
        if(s/k>b){
            vector<ll>ans;ll ex=(b+1)*k-1;
                ans.pb(ex);
                s=s-ex;
            while(s>0){
                ex=min(k-1,s);
                ans.pb(ex);
                s=s-ex;
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
            for(int i=ans.size();i<n;i++) cout<<"0 ";
            cout<<endl;
        }
        else{
            cout<<s<<" ";
            for(int i=1;i<n;i++) cout<<"0 ";
            cout<<endl;
        }
        
    }
    // ll extra=(k-1)*(k-1);
    // if(k*b<=s) {
    //     cout<<s-extra<<" "<<extra<<" "<<(s-extra)/k<<endl;
    //     if((s-extra)/k<=b) cout<<"a"<<endl;
    //     else cout<<"-1"<<endl;
    // }
    else cout<<"-1"<<endl;
}
return 0;
}
