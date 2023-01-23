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
// cin>>t;
while(t--){
    ll n;
    // vector<vector<ll>>vec(n);
    // vector<vector<ll>>vece(n);
    cin>>n;
    ll vec[n+1][n+1];
    ll vece[n+1][n+1];
    char ch;
    //  cout<<"f";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin>>ch;
            if(ch=='*') vece[i][j]=-1;
            else vece[i][j]=0;
        }
    }
   
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(i==(n-1) && (j==n-1)) vec[i][j]=1;
            else{
                ll opt1=(i==(n-1))?0:vec[i+1][j];
                ll opt2=(j==(n-1))?0:vec[i][j+1];
                vec[i][j]=(opt1+opt2)%mod;
                if(vece[i][j]==-1) vec[i][j]=0;
            }
        }
    }
    if(vece[n-1][n-1]==-1) cout<<"0"<<endl;
    else cout<<vec[0][0]<<endl;
}
return 0;
}
