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
#define debug1(x) cout<<x<<endl;
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
ll findS(ll s)
{
    int sum = 0;
    int n;
 
    // Start adding numbers from 1
    for (n = 1; sum<s; n++) {
        sum += n;
 
        // If sum becomes equal to s
        // return n
        if (sum == s)
            return n;
    }
    return n-2;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n; 
    ll vec[n];
    array_input(n,vec);
    ll sum=0;
    ll dist=1;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]!=vec[i+1])
        dist++;
        sum+=vec[i];
    }
    sum=sum+vec[n-1];
   // cout<<sum<<endl;
   // cout<<dist<<endl;
   sum=sum;
   ll a=findS(sum);
   cout<<a<<endl;
}
return 0;
}
