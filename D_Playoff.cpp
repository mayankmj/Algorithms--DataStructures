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
// cin>>t;
while(t--){
    ll n; cin>>n;
    string s; cin>>s;
    vector<ll>vec;
    ll one=0,zero=0;
    for(auto &x:s)
    {
        if(x=='1') one++;
        else zero++;
    }
    // cout<<one<<" "<<zero<<endl;
    if(one == s.size()){
        cout<<binpow(2,n)<<endl;
        continue;
    }
    else if(zero == s.size())
    {
        cout<<1<<endl;
        continue;
    }
    else{
    for(int i=1;i<=binpow(2,n);i++) {
        vec.pb(i);
    }
   ll start=0,end=binpow(2,n)-1,one_c=0,zero_c=0,x=0,y=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') {
            zero_c++;
            if(zero_c<1) {
                vec[start]=-1; start++;
            }
            else {
                 
                for(int k=0;k<binpow(2,zero_c-1);k++) {
                vec[start]=-1;
                start++;
                }
               
            }
        }
        else { 
            one_c++;
            
            if(one_c<1) {
                vec[end]=-1;
                end--;
            }
            else{
               
                for(int k=0;k<binpow(2,one_c-1);k++) {
                    vec[end]=-1;
                    end--;
                }
                
            }
            }
    }
    for(int i=0;i<binpow(2,n);i++)
    {
        if(vec[i]!=-1) cout<<vec[i]<<" ";
    }
    cout<<endl;
    }

    // for(aut)
    // cout<<endl;
}
return 0;
}
