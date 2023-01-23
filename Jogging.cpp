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
 ll z=1e6;
  vector<ll>vec(z);
  ll count=0;
 vec[0]=1;

    while(z!=count)
    {
        count++;
        vec[count]=(vec[count-1]*2)%mod;
       // cout<<vec[count]<<endl;
    }
    ll s=vec.size();
while(t--){
    ll n,x;
    cin>>n>>x;
    ll count=0,sum=0;
    if(n==1)
    cout<<x<<endl;
    else if(n==2) cout<<x+x<<endl;
    else{
  //  cout<<vec[s-2]<<endl;
    cout<<(vec[n-1]*x)%mod<<endl;
    }   
   // cout<<binpow(2,3)<<" "<<binpow(3,2)<<endl;
}
return 0;
}
