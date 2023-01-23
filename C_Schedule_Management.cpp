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
    ll n,m;cin>>n>>m;
    vector<ll>vec(m);
    for(int i=0;i<m;i++){
        ll x; cin>>x;x--;
        vec[x]++;
    }
    ll lo=0,hi=1e9;
    while(lo<hi)
    {
        ll task=0;
        ll mid=(lo+hi)/2;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<=mid)
            {
                task+=(vec[i]+(mid-vec[i])/2);
            }
            else
            {
                task+=mid;
            }
        }
        if(task>=m) hi=mid;
        else lo=mid+1;
    }
    cout<<hi<<endl;
}
return 0;
}
