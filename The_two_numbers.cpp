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

ll gcd(ll a,ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
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
bool isPrime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
ll LargestPrime(ll TheNum)
{
	ll FactorCount = 0;

	for (ll i=TheNum; i>=2; --i)
	{

		for (ll j=2; j<sqrtl(i) + 1; ++j)  // HERE
		{
			if (i % j == 0)
			{
		            ++FactorCount;
                            break;  // HERE
			}
		}

		if (FactorCount == 0)
		{
			return i;
			break;
		}

		FactorCount = 0;
	}
	return 0;
}
ll maxPrimeFactors(ll n)
{
	// Initialize the maximum prime factor
	// variable with the lowest one
	long long maxPrime = -1;

	// Print the number of 2s that divide n
	while (n % 2 == 0) {
		maxPrime = 2;
		n >>= 1; // equivalent to n /= 2
	}
// n must be odd at this point
	while (n % 3 == 0) {
		maxPrime = 3;
		n=n/3;
	}

	// now we have to iterate only for integers
	// who does not have prime factor 2 and 3
	for (int i = 5; i <= sqrt(n); i += 6) {
		while (n % i == 0) {
			maxPrime = i;
			n = n / i;
		}
	while (n % (i+2) == 0) {
			maxPrime = i+2;
			n = n / (i+2);
		}
	}

	// This condition is to handle the case
	// when n is a prime number greater than 4
	if (n > 4)
		maxPrime = n;

	return maxPrime;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n==3) cout<<"1"<<"\n";
    else if(n==2) cout<<"0"<<"\n";
    else if(n==4) cout<<"2"<<"\n";
    else if(n==5) cout<<"5"<<"\n";
    else if(n==6) cout<<"4"<<"\n";
    else{
    for(ll i=n/2;i<n;i++)
    {
        if(__gcd(i,n-i)==1)
        {
          //  cout<<lcm(i,n-i)<<" "<<gcd(i,n-i)<<endl;
         // cout<<i<<" ";
            cout<<i*(n-i)-1<<"\n";
            break;
        }
    }
    // ll temp=LargestPrime(n-1);
    // cout<<temp*(n-temp)-1<<"\n";
    }
}
return 0;
}
