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
#define debug2(x,y) cout<<x<<endl<<y<<endl
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
    ll n;
    cin>>n;
    vector<ll int>vec;
    ll temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    ll count=1;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]!=vec[i+1])
        count++;
    }
   // debug1(count);
    //debug2(vec[n-1],vec[n-2]);
    //if(vec[n-1]!=vec[n-2])
    //count++;
  //  debug1(count);
    for(int i=0;i<count;i++)
    cout<<count<<" ";
    for(int i=count;i<n;i++){
    cout<<count+1<<" ";
    count++;
    }
    cout<<endl;
}
return 0;
}
