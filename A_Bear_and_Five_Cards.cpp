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
#define debug2(x,y) cout<<x<<y<<endl  
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
ll n=5;
ll arr[n];
array_input(n,arr);
sort(arr,arr+n,greater<int>());
ll c=1,sum=0,total=0;
ll sume=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
for(int i=0;i<n-1;i++)
{
    if(arr[i]==arr[i+1]){
        if(c==1)
        sum+=arr[i]+arr[i+1];
        else
        sum+=arr[i];
    c++;
    }
    else{
        c=1;
    if(total<sum){
    total=sum;
    sum=0;
    c=1;
    }
    }
    if(c>=3){
        if(total<sum)
        total=sum;
    break;
    }
  //  debug2(sum,total);
}
if(total<sum)
total=sum;
//cout<<total<<endl;
cout<<sume-total<<endl;
return 0;
}
