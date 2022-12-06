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





int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n; vector<ll>vec(n); cin>>vec;
    ll mx1=0,mx2=0,mx=0;
    vector<ll>suff(n,0);
    vector<ll>temp;
    temp=vec;
    for(int i=0;i<n;i++){
        if(temp[i]==0) {
            temp[i]=1; break;
        }
    }
     for(int i=n-1;i>=0;i--)
    {
        if((i==n-1))
        {
            if(temp[i]==0)
             suff[i]=1;
             else suff[i]=0;
        }
        else if(temp[i]==0) suff[i]=suff[i+1]+1;  
        else suff[i]=suff[i+1];
    }
    //  cout<<"fd"<<endl;
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
       if(temp[i]==1) sum+=suff[i+1];
    }

  
    temp=vec;
    for(int i=n-1;i>=0;i--){
        if(temp[i]==1){
            temp[i]=0; break;
        }
    }
    for(int i=0;i<n;i++) suff[i]=0;
     for(int i=n-1;i>=0;i--)
    {
        if((i==n-1))
        {
            if(temp[i]==0)
             suff[i]=1;
             else suff[i]=0;
        }
        else if(temp[i]==0) suff[i]=suff[i+1]+1;  
        else suff[i]=suff[i+1];
    }
    ll sum1=0;
    for(int i=0;i<n-1;i++)
    {
        // cout<<suff[i]<<" ";
       if(temp[i]==1) sum1+=suff[i+1];
    }
    // cout<<sum<<" "<<sum1<<endl;
    sum=max(sum,sum1);
    temp=vec;
    for(int i=0;i<n;i++) suff[i]=0;
     for(int i=n-1;i>=0;i--)
    {
        if((i==n-1))
        {
            if(temp[i]==0)
             suff[i]=1;
             else suff[i]=0;
        }
        else if(temp[i]==0) suff[i]=suff[i+1]+1;  
        else suff[i]=suff[i+1];
    }
    //  cout<<"fd"<<endl;
     sum1=0;
    for(int i=0;i<n-1;i++)
    {
        // cout<<suff[i]<<" ";
       if(temp[i]==1) sum1+=suff[i+1];
    }
    cout<<max(sum,sum1)<<endl;
}
return 0;
}
