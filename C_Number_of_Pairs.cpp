#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
#define vecay_input(n,vec) for(int i=0;i<n;i++) cin>>vec[i] 
#define vecay_output(n,vec) for(int i=0;i<n;i++) cout<<vec[i]<<endl
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>vec;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    ll c=0;
    for(int i=0;i<n;i++)
    {
        ll x=lower_bound(vec.begin(),vec.end(),l-vec[i])-vec.begin();
        ll y=upper_bound(vec.begin(),vec.end(),r-vec[i])-vec.begin();
        c=c+(y-x);
        if(l<=2*vec[i] && r>=2*vec[i])
        c--;
    }
    cout<<c/2<<endl;
}
return 0;
}
