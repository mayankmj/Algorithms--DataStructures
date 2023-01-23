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
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<ll>s_a,s_c,t_a,t_c,t_b,s_b;
    ll flag=0,j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a') s_a.pb(i);
        else if(s[i]=='c') s_c.pb(i);
        else if(s[i]=='b') s_b.pb(i);
        if(t[i]=='a') t_a.pb(i);
        else if(t[i]=='c') t_c.pb(i);
        else t_b.pb(i); 
    }
    if(s==t) cout<<"YES"<<endl;
    else if(s_a.size()!=t_a.size() || s_c.size()!=t_c.size() || t_b.size()==0 || s_b.size()==0) cout<<"NO"<<endl;
    else{
    for(int i=0;i<n;i++)
    {
        if(s[i]=='b') continue;
        while(t[j]=='b') j+=1;
        if(s[i]!=t[j] || (s[i]=='a' && i>j) || (s[i]=='c' && i<j)){
            flag=1;
            break;
        }
        j++;
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
return 0;
}

