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
ll n,q;
cin>>n>>q;
vector<ll>vec(n);
for(int i=0;i<n;i++) cin>>vec[i];
sort(vec.begin(),vec.end());
ll prefix[n];
prefix[0]=vec[0];
for(int i=1;i<n;i++)
{
    prefix[i]=prefix[i-1]+vec[i];
}
ll z=0;
// for(auto x:prefix) cout<<x<<" ";
for(int i=0;i<q;i++){
    ll x,y,sum=0;
    cin>>x>>y;
    if(x==n){
        sum=prefix[n-(x-y)-1]-0;
    }
    else
    sum=prefix[n-(x-y)-1]-prefix[max(z,n-x-1)];
    cout<<sum<<endl;
}
return 0;
}
