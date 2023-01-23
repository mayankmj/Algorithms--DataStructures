#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
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
ll count=1;
while(t--){
    cout<<"Case #"<<count<<": ";
    ll n; cin>>n;
    vector<ll>vec(n),a(n); 
    cin>>vec;
    a=vec;
    sort(a.begin(),a.end());
    map<ll,ll>mp;
    ll mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mn=min(mn,vec[i]);
        mx=max(mx,vec[i]);
        mp[vec[i]]++;
    }
    ll lo1;
    for(int i=0;i<n;i++)
    {
        ll temp=2*vec[i]; ll flag=0;
        ll index=lower_bound(a.begin(),a.end(),temp)-a.begin();
        //  cout<<index<<" ";
        if(index!=n)
        {
            ll flag=0;
            for(int j=index;j>=0;j--){
            if(vec[i]!=a[j] && a[j]<=2*vec[i]){
            cout<<a[j]<<" ";
            flag=1;
            break;
            }
            else if(vec[i]==a[j] && mp[a[j]]>1){
                 cout<<a[j]<<" ";
            flag=1;
            break;
            }
            }
            if(flag==0) cout<<"-1 ";
        }
        else
        {
            for(int j=index-1;j>=0;j--)
            {
                // cout<<mp[a[j]]<<" ";
                if(vec[i]==a[j] && mp[a[j]]>1){
                    flag=1;
                    cout<<a[j]<<" "; break;
                }
                else if(vec[i]!=a[j]){
                    cout<<a[j]<<" ";
                    flag=1; break;

                }
            }
            if(flag==0) cout<<"-1"<<endl;
        }
    }
    cout<<endl;
    count++;
}
return 0;
}
