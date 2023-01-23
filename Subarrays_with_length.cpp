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
#define debug1(x) cout<<x<<endl;
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
    ll n;
    cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.pb(temp);
    }
    ll ans=0,count=0,x=0;
    for(ll i=0;i<n;i++)
   {
       if(vec[i]==1)
       ans++;
       else
       {
           if(vec[i]==n) ans++;
           else x=min(vec[i],min((n-vec[i]+1),min(i,(n-i-1))));
          if((i>=(vec[i]-1) || (n-i-1)>=vec[i]) && x<vec[i] && vec[i]!=n)
          ans++;
          ans+=x;
          x=0;
       }
       cout<<ans<<" ";
   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {
       if(vec[i]==vec[vec[i]+i-1] && vec[i]!=1)
       ans--; 
   }
  // cout<<count<<endl;
   cout<<ans<<endl;
}
return 0;
}