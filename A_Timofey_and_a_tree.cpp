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
bool ok;
bool dfs(ll root,ll parent,ll curr_color,vector<vector<ll>>&vec,vector<ll>&color)
{
    ok=ok && (color[root]==curr_color);
    for(auto x:vec[root])
    {
        if(vec[root][x]!=parent)
        dfs(vec[root][x],root,curr_color,vec,color);
    }
}
bool solve(ll v,vector<vector<ll>>&vec,vector<ll>&color)
{
    bool ans=true;
    for(auto x:vec[v])
    {
        ll curr_color=color[vec[v][x]];
        ok=true;
        dfs(vec[v][x],v,curr_color,vec,color);
        ans=ans && ok;       
    }
    return ans;
}
int32_t main(){
fast
    ll n;
    vector<vector<ll>>vec(n);
    for(int i=0;i<n-1;i++)
    {
        ll x,y;
        cin>>x>>y; x--;y--;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    vector<ll>color(n);
    for(int i=0;i<n;i++) cin>>color[i];
    ll root1=-1,root2=-1;
    for(int i=0;i<n;i++)
    {
        for(auto x:vec[i]){
            if(color[x]!=color[i])
            {
                root1=x;
                root2=i;
            }
        }
    }
    if(root1==-1){ cout<<"YES"<<endl;
    return 0;}// all nodes having same color vertex
    bool ans1=solve(root1,vec,color);
    bool ans2=solve(root2,vec,color);
    if(ans1==true) cout<<"YES"<<endl<<root1<<endl;
    else if(ans2==true) cout<<"YES"<<endl<<root2<<endl;
    else cout<<"NO"<<endl;
return 0;
}
