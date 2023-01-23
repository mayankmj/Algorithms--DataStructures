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
    ll n; cin>>n;
    vector<ll>vec(n); cin>>vec;
    map<ll,ll,greater<ll>>mpp;
    for(int i=0;i<n;i++) mpp[vec[i]]++;
    ll extra = 0 ,flag=1,counter = n;
    // sort(mpp.begin(),mpp.end(),greater<int>());
    for(auto &x:mpp)
    {
        if(x.first !=counter){
            extra-=(counter-x.first);
            counter = x.first;
        }
        if(extra<0 || x.second>2)flag=0;
        if(x.second == 2 ) extra++;
        counter--;
    }
    if(mpp[1ll] == 2) cout<<"NO"<<endl;
    else if(flag) {
        cout<<"YES"<<endl;
        vector<ll>a(n,0),b(n,0);
        set<ll>mp1,mp2;
        for(int i=1;i<=n;i++){
            mp1.insert(i);
            mp2.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            ll freq = mpp[vec[i]];
            if(freq == 1) {
                a[i]=vec[i];
                mp1.erase(a[i]);
            }
            else{
                b[i]=vec[i];
                mpp[vec[i]]--;
               mp2.erase(b[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0){
                auto it=mp1.upper_bound(b[i]);
                a[i]=*--it;
                mp1.erase(it);
            }
            else{
              auto it=mp2.upper_bound(a[i]);;
               b[i]=*--it;
                mp2.erase(it);
            }
        }
        for(auto &x:a) cout<<x<<" ";
        cout<<endl;
        for(auto &x:b) cout<<x<<" ";
        cout<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}
