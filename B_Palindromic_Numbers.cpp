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
    string s,a,ans; cin>>s;
    ll flag=0;
    if(s[0]=='9'){
    for(int i=0;i<=n;i++) a.append("1");
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>=s[i] && flag==0)
        {
            string temp=to_string(a[i]-s[i]);
            ans.append(temp);
        }
        else if(s[i]>a[i] && flag==0)
        {
            string temp=to_string(11-s[i]+'0');
            ans.append(temp); flag=1;
        }
        else if(a[i]>s[i] && flag==1)
        {
            flag=0;ans.append("0");
        }
        else if(flag==1)
        {
            string temp=to_string(10-s[i]+'0');
            ans.append(temp);
        }
       // cout<<ans<<" ";
    }    
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;    
    }
    else{
        for(int i=0;i<=n;i++) a.append("9");
        for(int i=0;i<n;i++)
        {
           // cout<<a[i]<<" "<<s[i]<<endl;
            string temp=to_string(a[i]-s[i]);
         //   cout<<temp<<endl;
            ans.append(temp);
        }
        cout<<ans<<endl;
    }
    
}
return 0;
}
