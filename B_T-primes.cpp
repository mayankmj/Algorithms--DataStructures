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
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrtl(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
// bool isPrime(ll n)
// {
//     // Corner case
//     if (n <= 1)
//         return false;
 
//     // Check from 2 to square root of n
//     for (ll i = 2; i <= sqrtl(n); i++){
//         if (n % i == 0)
//             return false;
//     }
 
//     return true;
// }
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
 
	if (n % 2 == 0 || n % 3 == 0)
		return false;
 
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
 
	return true;
}
int32_t main(){
fast
ll n;
cin>>n;
vector<ll>vec;
for(ll i=0;i<n;i++)
{
    ll temp;
    cin>>temp;
    vec.pb(temp);
}
for(ll i=0;i<n;i++)
{
    ll flag=0;
    ll a=sqrtl(vec[i]);
    if(vec[i]%a==0 && isPrime(a)==true && isPerfectSquare(vec[i])) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}