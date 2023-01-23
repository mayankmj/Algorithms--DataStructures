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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    ll suffix=0,prefix=0,ans=0;
    for(int i=0;i<n-1;i++)
    {
        vec[i]-=suffix;
        if((vec[i+1]-suffix)>vec[i])
        {
            ans+=(abs(vec[i+1]-vec[i]));
            suffix=abs(vec[i+1]-vec[i]);
            cout<<ans<<" "<<i<<endl;;
        }
        
    }
    cout<<endl;
    cout<<ans<<" ";
     vec[n-1]-=suffix;
    for(auto x:vec) cout<<x<<" ";
    cout<<endl;
    for(int i=n-1;i>0;i--)
    {
        vec[i]-=prefix;
        if(vec[i]<(vec[i-1]-prefix))
        {
            prefix+=abs(vec[i]-vec[i-1]-prefix);
            ans+=(abs(vec[i]-vec[i-1]-prefix));
        }
    } 
    vec[0]-=prefix;
    cout<<ans+abs(vec[0])<<endl;
}
return 0;
}
