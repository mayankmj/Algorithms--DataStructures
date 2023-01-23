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
ll n,k;
cin>>n>>k;
ll arr[n];
array_input(n,arr);
int j,i;
ll c=0;
for(i=k-1,j=k-1;i<n,j>=0;i++,j--)
{
   if(arr[i]==arr[j] && arr[i]==1)
   c+=2;
   if(i==(n-1))
   break;
}
if(arr[k-1]==1)
c--;
//cout<<c<<" "<<i<<" "<<j<<endl;
if(i<(n-1))
{
    for(int a=i;a<n;a++)
    {
        if(arr[a]==1)
        c++;
    }
}
//cout<<c<<endl;
if(j>=0)
{
    for(int a=j-1;a>=0;a--)
    {
        if(arr[a]==1)
        c++;
    }
}
if(n==2)
{
    ll sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    cout<<sum<<endl;
}
else
cout<<c<<endl;
return 0;
}
