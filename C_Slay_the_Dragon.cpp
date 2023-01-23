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
void solve(vector<ll>&vec,ll defense,ll attack,ll n,ll sum)
{
    ll index=upper_bound(vec.begin(),vec.end(),defense)-vec.begin();
    ll ans1=0,ans2=0;
    if(index==n) index--;
    // cout<<index<<endl;
    if(defense-vec[index]>0)
    ans1+=(defense-vec[index]);//cout<<ans1<<" ";

    if((sum-vec[index])<attack) ans1+=(attack-sum+vec[index]);
    // cout<<ans1<<" ";
    if(defense-vec[index-1]>0 && index>0){
        ans2+=(defense-vec[index-1]);
    }
    if(sum-vec[index-1]<attack && index>0) ans2+=(attack+vec[index-1]-sum);
    // cout<<ans1<<" "<<ans2<<endl;
    if(index>0)cout<<min(ans1,ans2)<<endl;
    else cout<<ans1<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
ll t=1;
// cin>>t;/
while(t--){
    ll n;cin>>n;
    vector<ll>vec(n);
    array_input(n,vec);
    sort(vec.begin(),vec.end());
    ll m;cin>>m;
    unsigned long long int sum = accumulate(all(vec),0ll);
    for(int i=0;i<m;i++)
    {
        ll x,y; cin>>x>>y;
        solve(vec,x,y,n,sum);
    }
}
return 0;
}
