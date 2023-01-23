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
    ll n,x;
    cin>>n>>x;
    ll count=-1,sum=0;
    if(x%3==0 && x<=3*n && x>=0)
    {
        cout<<"YES"<<endl;
        cout<<x/3<<" "<<"0 "<<n-x/3<<endl;
    }
    else{
    ll a=(n*3-x)%4;
    ll b=((n*3-x)/4)+1;
   // cout<<b<<endl;
    //if(a==0)
   // cout<<"YES"<<endl<<n-b+1<<" "<<b-1<<" 0"<<endl;
    {
        ll c=x/3+1;
        ll temp=c*3;
        ll z=temp-x;
        n=n-c;
        if(n>=z && n>=0)
        {
            cout<<"YES"<<endl;
            cout<<c<<" "<<z<<" "<<n-z<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    }
} 
return 0;
}
