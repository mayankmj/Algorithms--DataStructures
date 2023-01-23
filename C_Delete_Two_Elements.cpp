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
    ll n,sum=0;cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) {
        cin>>vec[i];
    sum+=vec[i];
    }
    ll target=2*sum/n;
    sort(vec.begin(),vec.end());
    if(2*sum%n!=0) cout<<"0"<<endl;
    else{
        map<ll,ll>mpp;
        ll ans=0;
        for(int i=0;i<n;i++) mpp[vec[i]]++;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(target-vec[i])!=mpp.end()) ans+=mpp[target-vec[i]];
            if(vec[i]==(target-vec[i])) ans--;
        }
        cout<<ans/2<<endl;
    }
}
return 0;
}
