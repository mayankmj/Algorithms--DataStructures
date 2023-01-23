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
    ll n,r;
    cin>>n>>r;
    vector<ll>cost(n);
    vector<ll>cashback(n);
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    for(int i=0;i<n;i++)
    cin>>cashback[i];
    //vector<ll>diff(n);
    // for(int i=0;i<n;i++)
    // diff[i]=cost[i]-cashback[i];
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        vec.pb(make_pair(cost[i]-cashback[i],cost[i]));
    }
    sort(vec.begin(),vec.end());
    ll sum=0;
   // cout<<diff[0];
    for(int i=0;i<n;i++)
    {
        if(vec[i].second<=r)
        {
            ll ans=r/vec[i].second;
            sum+=ans;
            r-=vec[i].first*ans;
            while(vec[i].second<=r)
            {
                sum++;
                r-=vec[i].first;
               // cout<<r<<" ";
            }
        }
    }
    cout<<sum<<"\n";
}
return 0;
}
