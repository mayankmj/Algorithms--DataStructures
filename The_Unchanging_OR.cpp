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
unsigned highestPowerof2(unsigned x)
{
    // check for the set bits
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
 
    // Then we remove all but the top bit by xor'ing the
    // string of 1's with that string of 1's shifted one to
    // the left, and we end up with just the one top bit
    // followed by 0's.
    return x ^ (x >> 1);
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a=highestPowerof2(n);
    ll o_a=a;
    ll sum=0;
    while(a>2)
    {
        ll b=a/2;
        sum+=(a-b)-1;
        a=a/2;
    }
    if(o_a==n)
    cout<<sum<<endl;
    else
    {
        cout<<sum+(n-o_a)<<endl;
    }

}
return 0;
}
