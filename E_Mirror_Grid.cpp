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
    ll n; cin>>n;
    ll arr[n][n];
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        for(int j=0;j<n;j++)
        arr[i][j]=s[j]-'0';
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++) cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }
    ll i=0,j=0,ans=0;
    while(i<=n/2)
    {
        for(int j=i;j<n-i-1;j++){
            // ll i2=n-1-j; ll j2=n-1-i;
            // ll i3=j2; ll j3=n-1-i2;
            // ll i4=j3; ll j4=n-1-i3;
            // cout<<arr[i][j]<<" "<<arr[i2][j2]<<" "<<arr[i3][j3]<<" "<<arr[i4][j4]<<endl;
        ll temp=(arr[i][j]+arr[j][n-i-1]+arr[n-1-i][n-1-j]+arr[n-j-1][i]); //cout<<"ff"<<temp<<" ";
        if(temp==1 || temp==3) ans++;
        else if(temp==2) ans+=2; 
        //  cout<<ans<<" ";
        }
        //  cout<<endl;
        i++;
    }
    cout<<ans<<endl;
    
}
return 0;
}
