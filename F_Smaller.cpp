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





int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll q; cin>>q;
    ll s_a=1,s_b=1;
     ll mx_a=49;
        ll mn_a=49;
        ll mx_b=49,mn_b=49;
    for(int i=0;i<q;i++)
    {
        ll d,k; cin>>d>>k;
        string s; cin>>s;
        ll tt=s.size();
        if(d==1) {
            s_a+=(tt)*k;
             for(int i=0;i<tt;i++)
           {
             ll temp=s[i]-'0';
            mx_a=max(mx_a,temp);
            mn_a=min(mn_a,temp);
           }
        }
        else if(d==2){
            s_b+=(tt)*k;
               for(int i=0;i<tt;i++)
           {
            ll temp=s[i]-'0';
            mx_b=max(mx_b,temp);
            mn_b=min(mn_b,temp);
           }
        }
        if(mx_b>mn_a) cout<<"YES"<<endl;
        else if(mx_b==mn_a){
            if(mx_a>mx_b) cout<<"NO"<<endl;
            else if(s_b>s_a) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        else cout<<"NO"<<endl;
    }
}
return 0;
}
