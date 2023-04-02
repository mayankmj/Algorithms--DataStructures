#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 998244353
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
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans*a);a =(a*a);b >>= 1;}return ans;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


ll ans_finder(ll l,ll r,ll tt)
{
    ll left=l,right=r,temp=0;
    while(left<=right)
    {
        ll mid=(left+right)/2;
        if(mid*tt>r) right=mid-1;
        else if(mid*tt<=r) {
            left=mid+1;
            temp=mid;
        }
    }
    return temp;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll a,b; cin>>a>>b;
    ll sum=0,mx=0,temp=a;
    if(a == b) {
        cout<<"1 1"<<endl;
        continue;
    }
    while(temp<=b)
    {
        temp=temp*2;
        mx++;
    }
    cout<<mx<<" ";
    ll ans=0;
    if(mx == 1) cout<<b-a+1<<endl;
    else{
         ll tt=binpow(2,mx-2)*3,ex = binpow(2,mx-1);
         ll last_no=b/ex;
         ll extra = ans_finder(a,b,tt);
        //  cout<<last_no<<" "<<extra<<endl;
         if(extra>=a) {
            extra = ((extra-a+1)*(mx-1))%mod+(-a+last_no+1)%mod;
            cout<<extra%mod<<endl;
         }
         else {
            cout<<(-a+last_no+1)%mod<<endl;
         }
    }
}
return 0;
}
