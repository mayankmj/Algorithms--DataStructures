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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,q,x,k;
    cin>>n;
    ll arr[n];
    array_input(n,arr);
   
    ll final[n+1][n];
    cin>>q;
    for(int i=0;i<n;i++)
    {
        final[0][i]=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
         unordered_map<int,int>mayank;
         for(int j=0;j<n;j++)
        mayank[arr[j]]++;
        for(int j=0;j<n;j++)
        {
          //  ll a=mayank[j].second;
            final[i][j]=mayank[arr[j]];
            arr[j]=mayank[arr[j]];
        }
    }
    for(int i=0;i<q;i++)
    {
        cin>>x>>k;
        x--;
        if(k>(n-1))
        cout<<final[n][x]<<endl;
        else
        cout<<final[k][x]<<endl;
    }
}
return 0;
}
