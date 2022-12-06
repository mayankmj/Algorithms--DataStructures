// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long
// // // #define pi (3.141592653589)
// // // #define mod 1000000007
// // // #define float double
// // // #define pb push_back
// // // #define mp make_pair
// // // #define ff first
// // // #define ss second
// // // #define all(c) c.begin(), c.end()
// // // #define min3(a, b, c) min(c, min(a, b))
// // // #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// // // #define rrep(i, n) for(int i=n-1;i>=0;i--)
// // // #define rep(i,n) for(int i=0;i<n;i++)
// // // #define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
// // // #define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
// // // #define print(vec) for(auto &x:vec) cout<<x<< 
  
// // // #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// // // template <typename T> //cin for vector
// // // istream &operator>>(istream &istream, vector<T> &v){
// // // for(auto &it :v)
// // // cin>>it;
// // // return istream;
// // // }


// // // ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// // // ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
// // // ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
// // // bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}



// // // bool prime[200000+1];
// // // void sieve{
// // //     memset(prime, true, sizeof(prime));
// // //     ll n=200000;
// // //     for (int p=2; p*p<=n; p++)
// // //     {
// // //         // If prime[p] is not changed, then it is a prime
// // //         if (prime[p] == true)
// // //         {
// // //             // Update all multiples of p
// // //             for (int i=p*2; i<=n; i += p)
// // //                 prime[i] = false;
// // //         }
// // //     }
// // //     //     cout << p << " ";
// // // }
// // // int32_t main(){
// // // fast
// // // ll t=1;
// // // cin>>t;
// // // while(t--){
// // //     ll n; cin>>n;
// // //     vector<ll>vec(n); cin>>vec;
// // //     ll ans=0;
// // //     vector<pair<ll,ll>>ans;
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         if(prime[vec[i]]==true) ans.pb(make_pair(vec[i],i));
// // //     }
// // //     if(ans.size()) cout<<"-1"<<endl;
// // //     else cout<<ans<<endl;
// // // }
// // // return 0;
// // // }
// // // #include <bits/stdc++.h>

// // // using namespace std;
// // // typedef long long ll;
// // // const int maxX = 1e6+1;

// // // ll ans;
// // // int N, dp[maxX];
// // // bool b[maxX];
// // // vector<int> primes;

// // // void init(){
// // //     fill(b+2, b+maxX, true);
// // //     for(int i = 2; i*i < maxX; i++)
// // //         if(b[i])
// // //             for(int j = i*i; j < maxX; j += i)
// // //                 b[j] = false;
// // //     for(int i = 2; i < maxX; i++)
// // //         if(b[i])
// // //             primes.push_back(i);
// // // }

// // // void compute(int x){
// // //     vector<int> pf;
// // //     for(int p : primes){
// // //         if(x == 1)  break;
// // //         else if(b[x]){
// // //             pf.push_back(x);
// // //             break;
// // //         }

// // //         if(x % p)   continue;
// // //         pf.push_back(p);
// // //         while(x % p == 0)
// // //             x /= p;
// // //     }

// // //     int K = (int) pf.size();
// // //     for(int mask = 0; mask < (1<<K); mask++){
// // //         int mu = 1;
// // //         for(int i = 0; i < K; i++)
// // //             if(mask&(1<<i))
// // //                 mu *= pf[i];

// // //         int k = __builtin_popcount(mask);
// // //         ans += (k&1 ? -dp[mu] : dp[mu]);
// // //         dp[mu]++;
// // //     }
// // // }

// // // int main(){
// // //     init();
// // //     scanf("%d", &N);
// // //     for(int i = 0, x; i < N; i++){
// // //         scanf("%d", &x);
// // //         compute(x);
// // //     }
// // //     printf("%lld\n", ans);
// // // }
// // // C++ program to find number of unordered
// // // coprime pairs of integers from 1 to N
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define N 100005

// // // to store euler's totient function
// // int phi[N];

// // // to store required answer
// // int S[N];

// // // Computes and prints totient of all numbers
// // // smaller than or equal to N.
// // void computeTotient()
// // {
// // 	// Initialise the phi[] with 1
// // 	for (int i = 1; i < N; i++)
// // 		phi[i] = i;

// // 	// Compute other Phi values
// // 	for (int p = 2; p < N; p++) {

// // 		// If phi[p] is not computed already,
// // 		// then number p is prime
// // 		if (phi[p] == p) {

// // 			// Phi of a prime number p is
// // 			// always equal to p-1.
// // 			phi[p] = p - 1;

// // 			// Update phi values of all
// // 			// multiples of p
// // // 			for (int i = 2 * p; i < N; i += p) {

// // // 				// Add contribution of p to its
// // // 				// multiple i by multiplying with
// // // 				// (1 - 1/p)
// // // 				phi[i] = (phi[i] / p) * (p - 1);
// // // 			}
// // // 		}
// // // 	}
// // // }

// // // // function to compute number coprime pairs
// // // void CoPrimes()
// // // {
// // // 	// function call to compute
// // // 	// euler totient function
// // // 	computeTotient();

// // // 	// prefix sum of all euler totient function values
// // // 	for (int i = 1; i < N; i++)
// // // 		S[i] = S[i - 1] + phi[i];
// // // }

// // // // Driver code
// // // int main()
// // // {
// // // 	// function call
// // // 	CoPrimes();

// // // 	int q[] = { 3,2,1 };
// // // 	int n = sizeof(q) / sizeof(q[0]);

// // // 	for (int i = 0; i < 1; i++)
// // //      cin>>q[i];
// // // 		cout << "Number of unordered coprime\n"
// // // 			<< "pairs of integers from 1 to "
// // // 			<< q[i] << " are " << S[q[i]] << endl;

// // // 	return 0;
// // // }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pi (3.141592653589)
// #define mod 1000000007
// #define float double
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rrep(i, n) for(int i=n-1;i>=0;i--)
// #define rep(i,n) for(int i=0;i<n;i++)
// #define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
// #define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
// #define print(vec) for(auto &x:vec) cout<<x<< 
  
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// template <typename T> //cin for vector
// istream &operator>>(istream &istream, vector<T> &v){
// for(auto &it :v)
// cin>>it;
// return istream;
// }


// ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
// bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


// long long fact(const int& p)
// {
//     if (p <= 1)
//         return 1;
//     return p * fact(p - 1);
// }
// bool isPrime(const long long& p)
// {
//     if (p == 4)
//         return false;
 
//     //  (p - 1) ! ≡  (p-1) mod p
//     long long a = fact(p - 1) % p;
//     if (a == p - 1)
//         return true;
//     return false;
// }
// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
// //     ll n; cin>>n;
// //     vector<ll>vec(n); cin>>vec;
// //     map<ll,ll>mp;
// //     ll as=INT_MIN;
// //     ll one=1;
// //     for(int i=0;i<n;i++)
// //     {
// //         ll c=2;
// //         ll temp=vec[i];
// //         if(vec[i]==1) as=max(as,(i*2+2ll));
// //         while(temp>1)
// //        {
// //         if(temp%c==0){
// //         mp[c]++;
// //         temp/=c;
// //         }
// //         else c++;
// //        }
// //     }
// //     vector<ll>ans;
// //     for(auto &x:mp)
// //     {
// //         // cout<<x.first<<" ";
// //         if(x.second==1){
// //             ans.pb(x.first);
// //         }
// //     }
// //     // ll as=INT_MIN;
// //     vector<ll>qq;
// //     for(int i=0;i<=1000;++i) Q[i]=0;
// ll n; cin>>n;
// ll s=0,q=0;
// vector<ll>Q(100000);
//    for(ll i=1,x;i<=n;++i) {cin >> x;Q[x]=max(Q[x],i);}
//    for(int i=1;i<=1000;++i)
//       for(int j=1;j<=1000;++j)
//          if(__gcd(i,j)==1&&Q[i]&&Q[j])
//             s=max(s,Q[i]+Q[j]);
//    cout << s << endl;
//     // for(auto &x:ans) cout<<x<<" ";
//     // if(ans.size()==0) {cout<<"-1"<<endl; continue;}
//     // ans.pb(1ll);
//     // for(int j=0;j<ans.size();j++)
//     // {
//     //     ll tt=ans[j];
//     //     for(ll i=n-1;i>=0;i--)
//     //     {
//     //         if(vec[i]%tt==0){
//     //             as=max(as,(i+i+1ll));
//     //         }
//     //     }
//     // }
//     // cout<<as<<endl;

// }
// return 0;
// }
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
    ll n; cin>>n;
    vector<ll>vec(n); cin>>vec;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        mp[vec[i]]=i+1;
    }
    vector<ll>ans;
    for(auto &x:mp){
        ll tt=x.first;
        ans.pb(tt);
    }
    ll as=INT_MIN;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=i;j<ans.size();j++)
        {
            if(__gcd(ans[i],ans[j])==1)
            as=max(as,(mp[ans[i]]+mp[ans[j]]));
        }
    }
    if(as<0) cout<<"-1"<<endl;
    else cout<<as<<endl;
}
return 0;
}
