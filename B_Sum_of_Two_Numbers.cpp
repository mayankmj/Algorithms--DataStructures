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
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


bool diff(ll a, ll b)
{
    ll ad=0,bd=0,i=0;
    while(a>0)
    {
        ll temp=a%10;
        ad+=temp;
        a/=10;
        i++;
    }
    i=0;
    while(b>0)
    {
        ll temp=b%10;
        bd+=temp;
        b/=10;
        i++;
    }
    if(bd-ad == 0 || bd-ad == 1) return 1;
    return 0;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
    else {
        string s=to_string(n);
        string a="",b="";
        ll flag=0;
        for(int i=0;i<s.size();i++)
        {
            ll x =s[i]-'0',temp=x/2;
            string aa=to_string(temp) , bb=to_string(temp+1);
            // cout<<aa<<" "<<bb<<" "<<x<<endl;
            if(x == 0){
                a+="0"; b+="0";
            }
            else if(x%2==1){
                if(flag%2==1) a+=aa,b+=bb;
                else a+=bb,b+=aa;
                flag++;
            }
            else{
                a+=aa; b+=aa;
            }
        }
        ll x=stoi(a);
        ll y=stoi(b);
        cout<<x<<" "<<y<<endl;
        //  cout<<ans<<" "<<n-ans<<endl;
        // cout<<ans<<" "<<n-ans<<endl;

    }
 }
return 0;
}
