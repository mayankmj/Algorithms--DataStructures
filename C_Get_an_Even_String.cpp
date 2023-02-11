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

vector<ll>dp(2e5+1,-1);
ll ans=0;
ll ans_finder(string &s,ll index)
{
	ll n =s.size();
	if(index >= s.size()) {dp[min(index,n)] = dp[index-1];return 0;}
	
	if(index == s.size()-1) {  return dp[index] = ans_finder(s,index+1);}

	if(s[index] == s[index+1]) {
		if(index){
		dp[index]=dp[index-1]; 
		dp[index+1] = dp[index];
		}
		else {dp[index]=0; dp[index+1]=0;}
		return ans_finder(s,index+2);
	}

	else{
		ll x,y;
		// unpick
	 return x = 1+ans_finder(s,index+1);
	// pick
	swap(s[index],s[index+1]); 
	 return y =(1+ans_finder(s,index+1));
	dp[index] = min(x,y);
	}
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
	string s; cin>>s;
	map<char,vector<ll>>mpp;
	ll tt =ans_finder(s,0);
	cout<<dp[s.size()]<<endl;
	// for(int i=0;i<s.size();i++)
	// {
	// 	mpp[s[i]].pb(i+1);
	// }
	// ll tt=INT_MAX;
	// for(auto &x:mpp) mpp[x.first].pb(tt);

	// // for(auto &x:mpp)
	// // {
	// // 	cout<<x.ff<<"-> ";
	// // 	for(auto &y:x.second) cout<<y<<" ";
	// // 	cout<<endl;
	// // }
	// ll ans=0;
	// for(int i=0;i<s.size();i=i+2)
	// {
	// 	if( i == s.size()-1) { ans++; continue;}
	// 	if(s[i]!=s[i+1]){
	// 		// cout<<s[i]<<" "<<s[i+1]<<" "<<i<<endl;
	// 		auto f1 = upper_bound(mpp[s[i]].begin(),mpp[s[i]].end(),i+1)-mpp[s[i]].begin();
	// 		auto f2 = upper_bound(mpp[s[i+1]].begin(),mpp[s[i+1]].end(),i+2)-mpp[s[i+1]].begin();
	// 		ans++;
	// 		ll curr_val = mpp[s[i]][f1] , next_val = mpp[s[i+1]][f2];
	// 		if(curr_val<next_val) s[i+1]=s[i];
	// 		i--;
	// 		// cout<<f1<<" "<<f2<<endl;
	// 	}
	// }
	// cout<<ans<<endl;
}
return 0;
}
