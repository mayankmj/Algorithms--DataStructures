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
vector<ll> divisors(ll n)
{
    ll count=0;
    vector<ll>vec;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            count++; vec.push_back(i);
            if(i!=(n/i)) {count++; vec.push_back(n/i);}
        }
    }
    return vec;
}
ll div_count(ll n)
{
    ll count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            count++; 
            if(i!=(n/i)) {count++;}
        }
    }
    return count;
}
bool isPrime(int n)
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
bool is_2(ll n)
{
    if(ceil(log2(n))==floor(log2(n))) return 1;
    else return 0;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
	    cin>>n;
	    ll flag=0;
        if(n%2==1) cout<<"Bob"<<endl;
        else if(is_2(n)!=true) cout<<"Alice"<<endl;
        else{
            ll count=0;
            while(n>0){
                count++;
                n=n/2;
            }
            if(count%2==0) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
	}
return 0;
}
