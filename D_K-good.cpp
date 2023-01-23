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
ll int isvalid(ll int s)
{
    // Solution of Quadratic Equation
    float k=(-1+sqrt(1+8*s))/2;
   
    // Condition to check if the 
    // solution is a integer
    if(ceil(k)==floor(k))
        return k;
    else
      return -1;
} 
ll checker(ll n)
{
    ll check=n/2;
    for(ll i=3;i<n/2;i++)
    {
        if(n%i==0){
            ll temp=n/i;
            if(temp%2==0 && temp<=i) return i;
            if(temp%2!=0 && temp<=(i+1))
             return i;
    }
    }
    return -1;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    if(n<=5)
    {
        if(n==1 || n%2==0) cout<<"-1"<<endl;
        else cout<<"2"<<endl; 
    }
    else if(n%2!=0) cout<<"2"<<endl;
    else
    {
        ll ans=isvalid(n);
        if(ans!=-1) cout<<ans<<endl;
        else
        {
            ll flag=checker(n);
            if(flag==-1) cout<<"-1"<<endl;
            else cout<<n/flag<<endl;
        }

    }
}
return 0;
}
