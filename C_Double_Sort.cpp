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
bool is_sorted(ll n, vector<ll>&vec)
{
    vector<ll>v(vec);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]!=vec[i])
        return false;
    }
    return true;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    array_input(n,a);
    array_input(n,b);
    ll size=1e4,j=n-1;
    vector<pair<ll,ll>>vec;
    ll count=0,bb=0;
    for(int i=0;i<n-1-bb;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(a[j+1]<a[j] || b[j+1]<b[j])
            {
                vec.pb(make_pair(j+2,j+1));
                count++;
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
        bb++;
        i=-1;
    }
    // for(auto x:a) cout<<x<<" ";
    if(count>size) cout<<"-1"<<endl;
    else{
        if(is_sorted(n,a)==true && is_sorted(n,b)==true) {
            cout<<count<<endl;
            ll s=vec.size();
            for(int i=0;i<s;i++)
            {
                cout<<vec[i].first<<" "<<vec[i].second<<endl;
            }
        }
        else cout<<"-1"<<endl;
    }
}
return 0;
}
