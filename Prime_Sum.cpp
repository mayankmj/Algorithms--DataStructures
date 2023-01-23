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
    ll a,b;
    cin>>a>>b;
    if(a==1 || b==1)
    cout<<"-1"<<endl;
    else if(max(a,b)%min(a,b)==0)
    cout<<"0"<<endl;
    else if(a<5 && b<5 && a!=b)
    cout<<"1"<<endl;
    else if(a%2==0 && b%2==0)
    cout<<"0"<<endl;
    else if(a%2==1 && b%2==1)
    {
        if(a%3==0 && b%3==0)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
    else
    {
        if(a%3==0 && b%3==0)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
}
return 0;
}
