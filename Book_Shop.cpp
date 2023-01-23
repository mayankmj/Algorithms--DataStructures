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
int main(){
// fast
ll t=1;
// cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>vec;
    vector<ll>pages(n+1),price(n+1);
    for(int i=1;i<=n;i++) cin>>price[i];
    for(int i=1;i<=n;i++) cin>>pages[i];
    for(int i=1;i<=n;i++)
    {
        vec.pb(make_pair(pages[i],price[i]));
    }
    ll dp[n+2][n+2];
    for(int i=0;i<=n+2;i++)
    {
        for(int j=0;j<=n+2;j++) dp[i][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int money=1;money<=x;money++)
        {
            ll opt1=0;
            if(i!=1) dp[i-1][money];
            ll opt2=0;
            if(money>=price[i]) opt2=pages[i]+dp[i-1][money-price[i]];
              cout<<opt1<<" "<<opt2<<" "<<i<<" "<<money<<endl;
            dp[i][money]=max(opt1,opt2);
        }
    }
    //  for(int i=1;i<=x;i++) cout<<dp[i][i]<<" ";
    cout<<dp[n][x]<<endl;
}
return 0;
}
// /*
//     author: kartik8800
// */
 
// #include<bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define fr(a,b) for(int i = a; i < b; i++)
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define mod 1000000007
// #define inf (1LL<<60)
// #define all(x) (x).begin(), (x).end()
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define triplet pair<ll,pair<ll,ll>>
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// using namespace std;
 
 
// int main() {
//    fast_io;
//    ll t,n,m,x,i,j,k,q;
//    //cin >> t;
//    t = 1;
//    while(t--)
//    {
//         cin >> n >> x;
//         vector<int> price(n+1), pages(n+1);
//         fr(1,n+1)
//             cin >> price[i];
//         fr(1,n+1)
//             cin >> pages[i];
 
//         int dp[n+1][x+1];
 
//         for(int i = 0; i <= n; i++)
//         {
//             for(int money = 0; money <= x; money++)
//             {
//                 if(money == 0 || i == 0)
//                     dp[i][money] = 0;
//                 else
//                 {
//                     int op1 = (i == 1) ? 0 : dp[i-1][money];
//                     int op2 = (money < price[i]) ? 0 : pages[i] + dp[i-1][money - price[i]];
//                     cout<<op1<<" "<<op2<<" "<<i<<" "<<money<<endl;
//                     dp[i][money] = max(op1,op2);
//                 }
//             }
//         }
 
//         cout << dp[n][x];
 
//    }
//    return 0;
// }