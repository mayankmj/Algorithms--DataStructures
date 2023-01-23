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
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
   ll arr[n+1][m+1];
    for(ll i=1;i<n+1;i++){
        for(ll j=1;j<m+1;j++){
            cin>>arr[i][j];
        }
    }
     ll ans[n+1][m+1];
     for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++) ans[i][j]=0;
     }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            ll curr_i=i; ll curr_j=j;
            while(curr_i>=1 && curr_j>=1){
                ans[i][j]+=arr[curr_i][curr_j]; curr_i--;curr_j--;
            }
            curr_i=i,curr_j=j;
            while(curr_i<=n && curr_j<=m){
                 ans[i][j]+=arr[curr_i][curr_j]; curr_i++;curr_j++;
            }
            curr_i=i,curr_j=j;
            while(curr_i<=n && curr_j>=1){
                ans[i][j]+=arr[curr_i][curr_j]; curr_i++;curr_j--;
            }
            curr_i=i,curr_j=j;
            while(curr_i>=1 && curr_j<=m){
                ans[i][j]+=arr[curr_i][curr_j]; curr_i--;curr_j++;
            }
            ans[i][j]=ans[i][j]-3*arr[i][j];
            //  cout<<ans[i][j]<<" "<<i<<" "<<j<<endl;


        }
    }
    ll final=INT_MIN;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++)
        {
            ll curr=ans[i][j];
            // cout<<curr<<" ";
            if(curr>final) final=curr;
        }
    }
    cout<<final<<endl;


}
return 0;
}
