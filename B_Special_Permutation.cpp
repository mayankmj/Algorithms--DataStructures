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
#define debug1(x) cout<<x<<endl;
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
    ll n,a,b;
    cin>>n>>a>>b;
    ll flag=0;
    if(a<(n/2+1) && b>(n/2))
    {
        cout<<a<<" ";
        for(int i=n;i>(n/2)+1;i--){
            if(i==b){
                cout<<n/2+1<<" ";
                flag=1;
            }
            else
          cout<<i<<" ";
        }
        cout<<b<<" ";
        for(int i=1;i<(n/2);i++)
        {
            if(i==a)
            {
                cout<<n/2<<" ";
            }
            else
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(a==b)
    cout<<"-1"<<endl;
    else if(a==(n/2+1) && b==n/2)
    {
        cout<<a<<" ";
        for(int i=n;i>n/2+1;i--){
            cout<<i<<" ";
        }
        cout<<b<<" ";
        for(int i=1;i<n/2;i++)
        cout<<i<<" ";
        cout<<endl;
    }
    else if(b==(n/2) && a==(n/2+1))
    {
        cout<<a<<" ";
        for(int i=n;i>n/2+1;i--){
            cout<<i<<" ";
        }
        cout<<b<<" ";
        for(int i=1;i<n/2;i++)
        cout<<i<<" ";
        cout<<endl;
    }
    else
    cout<<"-1"<<endl;
}
return 0;
}
