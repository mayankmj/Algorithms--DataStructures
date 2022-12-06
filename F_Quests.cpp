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



bool isGood(vector<ll>&vec,ll k,ll coins,ll days)
{
    ll n=vec.size(),sum=0,j=0,temp=k;
    while(sum<coins){
        if(j<n){
            sum+=vec[j];
           j++;
        }
        k--; days--;
        if(k==-1) {j=0; k=temp;}
        if(days==0) break;
    }
    // cout<<"k"<<sum<<endl;
    if(sum>=coins) return 1;
    return 0;

}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,c,d; cin>>n>>c>>d;
    vector<ll>vec(n); cin>>vec;
    sort(vec.begin(),vec.end(),greater<int>());
    ll sum=0;
    for(int i=0;i<min(n,d);i++) sum+=vec[i];
    if(sum>=c) cout<<"Infinity"<<endl;
    else if(d*vec[0]<c) cout<<"Impossible"<<endl;
    else{
        ll left=0, right=d+1;
        while(left+1<right){
            ll mid=(left+right)/2; //cout<<mid<<" "<<left<<" "<<right<<endl; 
            // cout<<mid<<endl;
            if(isGood(vec,mid,c,d)) left=mid;
            else right=mid;
        }
         cout<<left<<endl;
    }
}
return 0;
}
        