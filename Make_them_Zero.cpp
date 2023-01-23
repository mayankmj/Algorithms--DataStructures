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
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<ll>v(1000000,0);
 ll countBits(ll n)
{
   ll count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}
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
void DecimalToBinary(ll num)
{
    string str;
     ll size=0;
     //cout<<size<<" "<<num<<endl;
      while(num){
      if(num & 1) {// 1
      str+='1';
        v[size]=1;
       // cout<<"herer"<<v[size]<<" "<<size<<endl;
      }
      else
      str+='0';
      num>>=1; 
      size++;
    }
    //return str;   
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)
    cin>>vec[i];
    ll c=1,ans=0,sum=0;
    sort(vec.begin(),vec.end());
    ll a=countBits(vec[n-1]);
    for(int i=0;i<n;i++)
    {
        DecimalToBinary(vec[i]);
        //for(int j=0;j<n;j++)
        // cout<<v[j]<<" ";
        // cout<<endl;
    }
    for(int i=0;i<=a;i++)
    {
       // cout<<v[i]<<" ";
        if(v[i]==1)
        ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<1000000;i++)
    v[i]=0;
}
return 0;
}
