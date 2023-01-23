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
    ll n,k;
    cin>>n>>k;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    map<ll,ll>mpp;
    for(int i=0;i<n;i++) mpp[vec[i]]++;
    vector<ll>ans;
    for(auto x:mpp)
    {
        if(x.second>=k) ans.pb(x.first);
    }
    ll s=ans.size();
    if(s==0) cout<<"-1"<<endl;
    else
    {
        sort(ans.begin(),ans.end());
    ll mx=INT_MIN,final_left=0,final_right=0,left=ans[0];
    //  for(auto x:ans) cout<<x<<" ";
    for(int i=1;i<s;i++)
    {
        if(ans[i]==(ans[i-1]+1))
        {
            ll curr=abs(left-ans[i]);
            if(curr>mx)
            {
                final_left=left;
                final_right=ans[i];
                mx=curr;
            }
        }
        else
        {
            left=ans[i];
        }
    }
    if(final_left==0 && final_right==0) cout<<ans[0]<<" "<<ans[0]<<endl;
    else cout<<final_left<<" "<<final_right<<endl;
    }
    ans.clear();vec.clear();
}
return 0;
}
