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


ll lengthOfLIS(vector<ll> &nums) {
    if(nums.size() == 0)
    return 0;
    vector<ll>dp;
     dp.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++){
       bool flag = false;
      for(int j = 0; j < dp.size(); j++){
     if(nums[i] <= dp[j]){
    dp[j] = nums[i];
      flag = true;
      break; 
         } 
       }
   if(!flag)dp.push_back(nums[i]);
  }
return dp.size();
}

int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    vector<ll>vec(n); cin>>vec;
    ll count=0;
    if(vec[0]!=1) count++;
    if(vec[n-1]!=n) count++;
    ll tt1=1e16;
    if(is_sorted(vec.begin(),vec.end())) cout<<"0"<<endl;
    else if(count == 2){
        vector<ll>ans;
        ans.pb(1);
        for(int i=0;i<n;i++)
        {
            if(vec[i] == 1 || vec[i] == n) continue;
            ans.pb(vec[i]);
        }
        ans.pb(n);
        tt1=n-lengthOfLIS(ans)+1;
        ll tt2=ceil(n/2.0);
        ll tt=n-lengthOfLIS(vec);
        cout<<min({tt,tt1,tt2})<<endl;
    }
    else if(count == 0){
        ll mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,abs(i+1-vec[i])+1);
        }
        ll opt1=ceil(n/2.0);
        cout<<min(opt1,mx)<<endl;
    }
    else{
        ll count=0;
       for(int i=0;i<n;i++)
       {
           if(vec[i] != i+1) count++;
       }
       
    }
}
return 0;
}
