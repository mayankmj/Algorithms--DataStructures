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
    ll n;
    cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    }
    vector<ll>even,odd;
    ll eve=0,od=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]%2==0){eve++;
        even.push_back(vec[i]);
        }
        else{
            od++;
            odd.push_back(vec[i]);
        }
    }
    if((eve==0 && od%2!=0) || od==0 || od==1)
    cout<<"-1"<<endl;
    else
    {
        if(od%2==0){
        for(int i=0;i<od;i++)
        cout<<odd[i]<<" ";
        for(int i=0;i<eve;i++)
        cout<<even[i]<<" ";
        }
        else
        {
            for(int i=0;i<od-2;i++)
            cout<<odd[i]<<" ";
            for(int i=0;i<eve;i++)
            cout<<even[i]<<" ";
            for(int i=od-2;i<od;i++)
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}
