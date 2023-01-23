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
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
ll minOperation(ll k,ll n)
{
    // vector dp is initialised
    // to store the steps
    vector<ll> dp(k + 1, n);
 
    for (int i = 1; i <= k; i++) {
 
        dp[i] = dp[i - 1] + 1;
 
        // For all even numbers
        if (i % 2 == 0) {
            dp[i]
                = min(dp[i],
                      dp[i / 2] + 1);
        }
    }
    return dp[k];
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    vector<int>v;
    cin>>v;
   /* int n;
    cin>>n;
    ll a=32768%n;
    ll x=0,k=32768,y=0;
    ll temp=n,count=0,fina=999999;
    //final=minOperation(k,n);
   // n++;
   if(n*2>32768)
   fina=(32768-n);
   if(n==0)
   cout<<"0 ";
   else{
   while(n<32768)
   {
       n=n*2;
       count++;
   }
   n=n/2;
   y=32768-n;
    n=temp;
   for(int i=0;i<y && i<fina;i++)
   {
       n=temp;
       x=0;
      while(n!=0)
      {
        n=(n*2)%32768;
        if(x>(fina+i) && x>100)
        break;
        x++;       
      }
     // cout<<x<<" ";
      fina=min(fina,(x+i));
      temp++;
     }
    // cout<<endl;
    cout<<fina<<" ";
   }*/
}
cout<<endl;
return 0;
}
