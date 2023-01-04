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


ll lcs(string X, string Y, ll m, ll n,
        vector<vector<ll> >& dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);
  
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
                          lcs(X, Y, m - 1, n, dp));
}
ll ans_finder(string s){
      string rs = s;
        reverse(rs.begin(), rs.end());
        
        vector<int> row1(s.size()+1), row2(s.size()+1);
        for (int i=1; i<=s.size(); i++) {
            for (int j=1; j<=rs.size(); j++) {
                if (rs[j-1] == s[i-1]) {
                    row2[j] = row1[j-1] + 1;
                }
                else {
                    row2[j] = max(row1[j], row2[j-1]);
                }
            }
            row1 = row2;
        }
        return row1.back();
}

int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n ; cin>>n;
    string s; cin>>s;
    map<char,int>mpp;
    for(int i=0;i<s.size();i++)
    {
        mpp[s[i]]++;
    }
    if(mpp.size()==1){
        cout<<n/2<<endl;
        continue;
    }
    cout<<ans_finder(s)/2<<endl;
}
return 0;
}
