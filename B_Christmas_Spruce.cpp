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

vector<ll>leafnode;
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
void dfs(ll root,vector<vector<int>>&edges,vector<bool>&isleaf,vector<bool>&nodeisfine){
    if(edges[root].size()==0){
        isleaf[root]=true;
        return;
    }
    ll leafchildren=0;
    for(auto x:edges[root]){
        dfs(x,edges,isleaf,nodeisfine);
        if(isleaf[x])
        leafchildren++;
    }
    nodeisfine[root]=leafchildren >= 3? true :false;
}
int32_t main(){ 
fast
    ll n;
    cin>>n;
    // ll arr[n];
    // array_input(n,arr);
    bool ans=true;
    vector<vector<int>>edges(n,vector<int>());
    for(auto x:edges) cout<<x<<endl;
    for(int i=0;i<n-1;i++){
        ll x;
        cin>>x;
        x--;
        // tree[i+1].push_back(x);
        edges[x].pb(i+1);
    }
    vector<bool>isleaf(n);
    vector<bool> nodeisfine(n,true);
    dfs(0,edges,isleaf,nodeisfine);
    for(auto x:nodeisfine){
        if(!x) ans=false;
    }
    if(ans==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}
