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
unordered_map<char, int> h;
bool compare(string x, string y)
{
    for (int i = 0; i < min(x.size(), y.size()); i++) {
        if (h[x[i]] == h[y[i]])
            continue;
        return h[x[i]] < h[y[i]];
    }
    return x.size() < y.size();
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    
    string s;
    cin>>s;
    ll n=s.size();
    ll max=0,index=0;
    if((s[n-1]+s[n-1]-96)>9)
    {
        max=s[n-1]+s[n-2]-96;
        index=n-2;
    }
    for(int i=n-1;i>0;i--)
    {
        ll a=s[i]+s[i-1]-96;
        if(a<10)
        {
                max=a;
                index=i-1;
        }
        else if(a>9)
        {
                max=a;
                index=i-1;
                break;
        }
    }
    stringstream ss;
    string str;
    ss<<max;
    ss>>str;
    s.replace(index,2,str);
    cout<<s<<endl;
    }
        

return 0;
}