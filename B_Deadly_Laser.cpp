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
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define array_input(n,arr) for(ll i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(ll i=0;i<n;i++) cout<<arr[i]<<endl
#define print(vec) for(auto &x:vec) cout<<x<< 
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}



int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    ll arr[n][m];
    ll flag=0;
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<m;j++) arr[i][j]=1;
    // }
    // x--;y--;
    ll temp=0;
    // arr[x][y]=1000;
    // if(d!=0){
    // while(d>=temp && (x+temp)<n)
    // {
    //     arr[x+temp][y]=1000;
    //     temp++;
    // }
    // temp=0;
    // while(d>=temp && (y+temp)<m)
    // {
    //     arr[x][y+temp]=1000;
    //     temp++;
    // }
    // temp=0;
    // while(temp<=d && (y-temp)>=0)
    // {
    //     arr[x][y-temp]=1000;
    //     temp++;
    // }
    // temp=0;
    // while(temp<=d && (x-temp)>=0)
    // {
    //     arr[x-temp][y]=1000;
    //     temp++;
    // }
    // }
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<m;j++) cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }
        //  ll m=arr.size();
        // ll n=arr[0].size();
        // vector<ll> prev(n,0);
        // prev[0]=arr[0][0];
        // for(ll i=1;i<m;i++)
        // {
        //     prev[i]=prev[i-1]+arr[0][i];
        // }
        // for(ll i=1;i<n;i++)
        // {
        //     vector<ll> curr(n,0);
        //     curr[0]=prev[0]+arr[i][0];
        //     for(ll j=1;j<n;j++)
        //     {
        //         curr[j]=arr[i][j]+min(prev[j],curr[j-1]);
        //     }
        //     prev=curr;
        // }
        if((x-d>1 && y+d<m) || (x+d<n && y-d>1)) cout<<n+m-2<<endl;
        // else if(x+d<n && y-d>1) cout<<n+m-2<<endl;
        else cout<<"-1"<<endl;

    // if(prev[n-1]>=1000) cout<<"-1"<<endl;
    // else cout<<prev[n-1]-1<<endl;
}
return 0;
}
