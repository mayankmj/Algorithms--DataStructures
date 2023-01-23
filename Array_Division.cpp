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
bool check(vector<ll>&vec,ll mid,ll k)
{
    ll sum=0,cnt=0;
    for(auto x:vec)
    {
        if(mid<x) return false;
        else if(sum+x>mid) cnt++,sum=x;
        else sum+=x;
    }
    if(sum>0) cnt++;
    if(cnt<=k) return true;
    else return false;
}
int32_t main(){
fast
ll n,k;
cin>>n>>k;
vector<ll>vec(n);
ll max_sum=0;
for(auto &x:vec)
cin>>x,max_sum+=x;
ll lo=1,hi=max_sum,ans=0;
while(lo<=hi)
{
    ll mid=lo+(hi-lo)/2;
    if(check(vec,mid,k)==true) ans=mid,hi=mid-1;
    else lo=mid+1;
}
cout<<ans<<endl;
return 0;
}
