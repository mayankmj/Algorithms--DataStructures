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
#define print(vec) for(auto &x:vec) cout<<x<<
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}


ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}



void palindrome_no(vector<ll>&palindromes) {
   for(int i=0;i<9;i++) palindromes.pb(i);
   for(int i=11;i<binpow(2,16);i++)
   {
      string temp = to_string(i);
      ll tt= temp.size(),flag=0;
      for(int j=0;j<tt/2;j++)
      {
          if(temp[j]!=temp[tt-1-j]) {
            flag=1; break;
          }
      }
      if(!flag) palindromes.pb(i);  
   }
}


int32_t main(){
fast
ll t=1;
cin>>t;
vector<ll>p;
palindrome_no(p);
// cout<<p.size()<<endl;/
while(t--){
   ll n; cin>>n;
   vector<ll>vec(n); cin>>vec;
   sort(vec.begin(),vec.end());
   map<ll,ll>mpp;
   for(int i=0;i<n;i++) mpp[vec[i]]++;
   ll ans1=0;
   for(auto &x:mpp){
     if(x.ss>1) ans1+=(x.ss);
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<p.size();j++)
     {
         ll temp = vec[i]^p[j]; 
        //  cout<<temp;
        //  if(vec[i] == 12)
         ll l=0,r=n-1,flag=0;
         while (l <= r) {
         ll m = l + (r - l) / 2;
        if (vec[m] == temp)
            {flag=1;break;}
        if (vec[m] < temp)
            l = m + 1;
        else
            r = m - 1;
        }
        if(flag) {
            // cout<<"here "; 
            ans++;
            // cout<<temp<<" "<<vec[i]<<" "<<p[j]<<endl;
        }
     }
    //  cout<<endl;
   }
   cout<<ans - (ans-n)/2 + ans1<<"\n";
}
return 0;
}
