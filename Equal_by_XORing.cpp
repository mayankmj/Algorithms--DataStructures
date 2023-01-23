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
bool po(ll n)
{
    if((ceil(log2(n)))==(floor(log2(n))))
    return 1;
    return 0;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll a,b,n;
    cin>>a>>b>>n;
    ll target=a^b,sum=0,flag=0;
   // cout<<target<<endl;
  if(a==b) cout<<"0"<<endl;
  else if(target<n) cout<<"1"<<endl;
  else{
    ll a_bits=(ll int)(log2(target))+1;
    ll b_bits=(ll int)(log2(n))+1;
    if(a_bits==b_bits){
        if(po(n)) cout<<"-1"<<endl;
        else cout<<"2"<<endl;
    }
    else cout<<"-1"<<endl;
  }
    for(ll i=n;i>=n/2;i--)
    {
        sum++;
        ll c=a^i;
      //  cout<<c<<endl;
        if(c>=target){
            flag=1;
        break;
        }
    }
}
return 0;
}
