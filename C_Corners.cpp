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
#define min9(a, b, c, d ,e , f,g,h,ans) min(a, min(b, min(c, min(d,min(e,min(f,min(g,min(h,ans))))))))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define print(vec) for(auto &x:vec) cout<<x<< 
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}


ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}





int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,m; cin>>n>>m;
    ll arr[n+2][m+2];
    ll one_count=0;
    for(int i=0;i<=m+1;i++)
    arr[0][i]=10;
    for(int i=0;i<=m+1;i++) arr[n+1][i]=10;
    for(int i=0;i<=n+1;i++) arr[i][0]=10;
    for(int i=0;i<=n+1;i++) arr[i][m+1]=10;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j=1;j<=m;j++){
            arr[i][j]=(s[j-1])-48;
            if(arr[i][j]==1) one_count++;
        }
    }
    //  for(int i=0;i<=n+1;i++)
    // {
    //     for(int j=0;j<=m+1;j++) cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }
    if(n*m==one_count) cout<<n*m-2<<endl;
    else if(one_count==0) cout<<"0"<<endl;
    else{
        ll ans=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            {
                if(arr[i][j]==1){
                    ll l1=arr[i-1][j]+arr[i-1][j+1];
                    ll l2=arr[i+1][j]+arr[i][j+1];
                    ll l3=arr[i][j-1]+arr[i+1][j];
                    ll l4=arr[i][j+1]+arr[i+1][j+1];
                    ll l5=arr[i-1][j]+arr[i-1][j-1];
                    ll l6=arr[i][j-1]+arr[i+1][j-1];
                    ll l7=arr[i+1][j]+arr[i+1][j+1];
                    ll l8=arr[i+1][j]+arr[i+1][j-1];
                    ans=min9(l1,l2,l3,l4,l5,l6,l7,l8,ans);
                }
            }
        }
        // cout<<ans<<endl;
        cout<<one_count-ans<<endl;
    }
}
return 0;
}
