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
ll gcd(ll a,ll b){
    if(b==0)
    return a;  
    else
    return gcd(b,a%b);
}
int32_t main(){
fast 
ll a,b;
cin>>a>>b;
/*for(int i=0;i<temp;i++){
    if(gcd(a,b)==1)
    {
        arr[j]=a;
        brr[j]=b;
        a++;
        j++;
        b--;
    }
    else
    {
        b--;
    }
    k--;
    if(k<0)
    break;
}*/
if(b!=(a)){
cout<<"YES"<<endl;
ll temp=0;
if(a==1)
temp=a;
else
temp=a-1;
for(int i=0;i<(b-a+1)/2;i++)
{
    cout<<a+i*2<<" "<<a+i*2+1<<endl;
}
}
else
cout<<"NO"<<endl;
return 0;
}
