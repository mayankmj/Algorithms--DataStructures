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
#define max3(a,b,c) max(a,max(b,c))
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


ll maxx(ll a, ll s)
{
    if(s>a){
        return a;
    }
    return max(s,a-s);
}

ll minn(ll a, ll s)
{
    if(s>a) return 0;
    return min(s,a-s);
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,s; cin>>n>>s;
    vector<ll>vec(n); cin>>vec;
    vector<pair<ll,ll>>mul(n-1);     
    ll ans =0,first = vec[0],last = vec[n-1];

    for(int i=1;i<n-1;i++)
    {
        if(i == 1){
            ll x = first*maxx(vec[i],s); // 3
            ll y = maxx(vec[i],s)*maxx(vec[i+1],s); // 3*5
            if(x>y){
              mul[i].first =minn(vec[i],s);
              mul[i].second = maxx(vec[i],s);
            }
            else{
                mul[i].first =maxx(vec[i],s);
               mul[i].second = minn(vec[i],s);
            } 
        }
        else if( i == n-2){
             ll x = last*maxx(vec[i],s);
             ll y = maxx(vec[i-1],s)*maxx(vec[i],s);
             if(x>y){
                mul[i].first =maxx(vec[i],s);
                mul[i].second = minn(vec[i],s);
             }
             else{
              mul[i].first =minn(vec[i],s);
              mul[i].second = maxx(vec[i],s);
             }
        }
        else{
             ll x = maxx(vec[i+1],s)*maxx(vec[i],s);
             ll y = maxx(vec[i-1],s)*maxx(vec[i],s);
             if(x>y || y!= 0){
                mul[i].first =minn(vec[i],s);
                mul[i].second = maxx(vec[i],s);
             }
             else{
                mul[i].first =maxx(vec[i],s);
                mul[i].second = minn(vec[i],s);
             }
        }
    }

    for(auto &x:mul) cout<<x.first<<" "<<x.second<<endl;

    for(int i=1;i<n;i++)
    {
        if(i == 1) ans+=(first*mul[i].first);
        else if( i==n-1) ans+=(last*mul[i-1].second);
        else ans+=(mul[i].first*mul[i-1].second);
        // cout<<ans<<" ";
    }
    cout<<ans<<endl;

}
return 0;
}
