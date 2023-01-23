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
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>vec;
    for(int i=1;i<=n;i++) {
    ll b; cin>>b;//cout<<b<<" ";
    vec.pb(b);
    }
//     for(auto x:vec) cout<<x<<" ";
    ll dp[n+1][x+1];
    cout<<"f"<<endl;
    ll flag=0,count=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<=x;j++)
        {
            if(j==0) dp[i][j]=1;
            else{
                ll opt1= (j>=vec[i]) ?dp[i][j-vec[i]] :0 ; 
                ll opt2= (i==1) ? 0 : dp[i-1][j];
                dp[i][j]=(opt1+opt2)%mod;
            }
        }
     }
    // for(int i=0;i<10;i++)
    cout<<dp[n][n]<<endl;
return 0;
}
