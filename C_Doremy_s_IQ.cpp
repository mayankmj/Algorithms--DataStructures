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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,q;cin>>n>>q;
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        vec.pb(make_pair(x,i));
    }
    //  sort(vec.begin(),vec.end());
     ll temp_q=q,t_q=q;
     ll c=0,count=0;
    for(int i=n-1;i>=0;i--)
    {
        if(vec[i].first>t_q && t_q>0){
            count++;t_q--;
        }
        if(vec[i].first>temp_q) c++;
    }
    //   cout<<count<<" "<<c<<endl;
    for(int i=0;i<n;i++)
    {
        if(q==1 && i!=(n-1) && vec[i].first!=1){
            if(vec[i].first >q && c>count) c--;
            continue;
        }
        else if(q==1 && i==(n-1)){
            q--; vec[i].first=-1;
        }
        else if(vec[i].first>q && c>count)
        c--;
        else if(q<vec[i].first && q>0){
            q--; vec[i].first=-1;
        }
        else vec[i].first=-1;
        if(q==0) break;
    }  
    //  for(auto &x:vec) cout<<x.first<<" "<<x.second<<endl;
    sort(vec.begin(),vec.end(),sortbysec);
    for(auto &x:vec)
    {
        if(x.first==-1) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;

}
return 0;
}
