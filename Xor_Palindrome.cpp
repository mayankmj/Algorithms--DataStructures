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
    string s;
    cin>>s;
    ll one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        one++;
        else
        zero++;
    }
    // if(n%2==0)
    // {
    //     if((one%2==0 && zero%2==0) || one==n || zero==n || n==2 || (one==zero))
    //     cout<<"YES"<<endl;
    //     else
    //     cout<<"NO"<<endl;
    // }
    // else
    // {
    //     if(abs(one-zero)%2!=0 || one==n || zero==n)
    //     cout<<"YES"<<endl;
    //     else
    //     cout<<"NO"<<endl;
    //}
    ll j=n-1,count=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[j])
        count++;
        j--;
    }
    if(count%2==0)cout<<count/2<<endl;
    else cout<<count/2+1<<endl;
}
return 0;
}
