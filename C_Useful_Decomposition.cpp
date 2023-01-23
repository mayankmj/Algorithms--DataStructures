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
ll n;
cin>>n;
vector<ll>*vec=new vector<ll>[n] ;
for(int i=0;i<n-1;i++)
{
    ll x,y;
    cin>>x>>y;
    x--;
    y--;
    vec[x].pb(y);
    vec[y].pb(x);
    // cout<<"df"<<endl;
}

ll count=0,x=0,aa=INT_MIN;
for(int i=0;i<n;i++)
{
    if(vec[i].size()>=2 && vec[i].size()>aa){
        x=i;
        aa=vec[i].size();
    }
    if(vec[i].size()>2) count++;
   // cout<<vec[i].size()<<" ";
}
//cout<<count<<endl;
if(count>1) cout<<"No"<<endl;
else{
    cout<<"Yes"<<endl;
    vector<pair<ll,ll>>ans;
    for(int i=0;i<n;i++)
    {
        if(i==x) continue;
        if(vec[i].size()==1) ans.pb({x,i});
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)
    cout<<x.first+1<<" "<<x.second+1<<endl;
}
return 0;
}
