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
void dfs(ll root,vector<vector<ll>>&tree,ll parent,vector<ll>&iscat,vector<bool>&reach,ll globlmax,ll currmax,ll m){
           if(iscat[root]==1) currmax++;
           else currmax=0;
           globlmax=max(globlmax,currmax);
           if(tree[root].size()==1 && root!=0)
           {
               if(m>=globlmax){
               reach[root]=true;
              // cout<<"fds"<<endl;
               }
           }
           for(auto x:tree[root]){
            if(x!=parent) dfs(x,tree,root,iscat,reach,globlmax,currmax,m);
           }
}
int32_t main(){
fast
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>tree(n);
    vector<ll>iscat(n);
    for(int i=0;i<n;i++){
        cin>>iscat[i];
    }
    for(int i=0;i<n-1;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;y--;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    vector<bool>reach(n);
    ll globmax=0,currmax=0;
    dfs(0,tree,-1,iscat,reach,globmax,currmax,m);
    ll ans=0;
           for(auto x:reach)
           {
            if(x==true)
            ans++;
           }
           cout<<ans<<endl;
return 0;
}
