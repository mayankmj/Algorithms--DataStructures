#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
//#define v2 1000000007
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
    ll n;
    cin>>n;
    if(n == 2)
    {
        cout<<"NO\n";
      //  return ;
    }
    else if(n % 2 == 0)
    {
        vector<ll>v ,v2;
        for(int i = 1 ;i <= n ; i++)
        {
            if(i%2 == 0)
                v.push_back(i);
            else
            v2.push_back(i);
        }
        reverse(all(v));
        swap(v[0] , v[1]);
        cout<<"YES\n";
        // print(v);
        for(int i=0 ;i<v2.size();i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i  =0 ; i < v.size() ; i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<"\n";
    } 
    else
    {
        vector<ll>v ,v2;
        for(int i = 1 ;i <= n ; i++)
        {
            if(i%2 == 0)
                v.push_back(i);
            else
            v2.push_back(i);
        }
        reverse(all(v));
        cout<<"YES\n";
        for(int i  =0 ; i < v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i  =0 ; i < v2.size() ; i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<"\n";
    }
}
return 0;
}
