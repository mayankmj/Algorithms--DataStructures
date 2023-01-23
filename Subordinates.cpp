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
 vector<ll>vec(n);

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
void solve(ll root,ll parent,vector<ll>&vec,vector<ll>&ans)
{
    ll subord=0;
    for(ll x:vec[root])
    {
        if(x!=parent){
        solve(x,root,vec,ans);
        subord+=(1+ans[x]);
       // cout<<subord<<"aa ";
        }
    }
    ans[root]=subord;
  //  cout<<"dfdff"<<ans[root]<<" ";
}
int32_t main(){
fast
     ll n;
     cin>>n;
    
     for(ll i=2;i<=n;i++)
     {
        ll x,y;
        cin>>x;
       // x--;
        vec[x].push_back(i);
        vec[i].push_back(x);
     }
     vector<ll>ans(n);
   //  cout<<"f"<<endl;
     solve(1,-0,vec,ans);
     for(auto &x:ans)
     cout<<x<<" ";
     cout<<endl;
return 0;
}
