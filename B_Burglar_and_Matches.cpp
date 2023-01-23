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
    ll n,m;
    cin>>n>>m;
    ll ma[m],matches[m];
    for(int i=0;i<m;i++)
    {
        cin>>ma[i]>>matches[i];
    }
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < m-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < m; j++)
        if (matches[j] < matches[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(matches[min_idx], matches[i]);
         swap(ma[min_idx], ma[i]);
        
    }
   // array_output(m,matches);
    ll sum=0;
    for(int i=m-1;i>=0;i--)
    {
        if(n-ma[i]>=0)
        sum+=ma[i]*matches[i];
        else
        {
            sum+=matches[i]*n;
        }
        n-=ma[i];
        if(n<=0)
        break;
       // cout<<sum<<endl;
    }
    cout<<sum<<endl;
return 0;
}
