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
 ll count=1;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll small=0,big=0,special=0,max_n=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        max_n++;
        else if(s[i]>='a' && s[i]<='z')
        small++;
        else if(s[i]>='A' && s[i]<='Z')
        big++;
        else
        special++;
    }
    if(small==0)
    s+='a';
    if(big==0)
    s+='A';
    if(special==0)
    s+='@';
    ll size=s.size();
    if(size<7)
    {
        for(int i=size;i<7;i++)
        s+='1';
    }
    if(max_n==0 && size>=7)
    s+='1';
    cout<<"Case #"<<count<<": "<<s<<endl;
    count++;
}
return 0;
}
