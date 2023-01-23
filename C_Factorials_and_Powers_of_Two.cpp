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
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
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
ll int highestPowerof2(ll int n)
{
   ll p = (ll int)log2(n);
   return (ll int)binpow(2, p);
}
int ll printFactorialNums(ll int n)
{
    ll fact = 1;
    ll x = 2;
    while (fact <= n) {
        //cout << fact << " ";
 
        // Compute next factorial
        // using previous
        fact = fact * x;
 
        x++;
    }
    return fact/(x-1);
}
bool isPowerOfTwo(ll int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isFactorial(ll int n)
{
  for (ll int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }
 
  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
ll int decToBinary(ll int n)
{
    // array to store binary number
    ll binaryNum[100000];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    ll x=0;
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        {
          if(binaryNum[j]==1)
          x++;
        }
  return x;
}
string decimalToBinary(ll int n)
{
       ll int a=log2(n)+1;
       string bits;
       for(int i=0;i<a;i++)
       {
              if(n%2==0)
              bits[i]=0;
              else
              bits[i]=1;
              n/=2;
       }
       s.reverse(s.begin(),s.end());
       return bits;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll c=0,flag=0;
    ll a=printFactorialNums(n);
    if(isPowerOfTwo(n)==true || isFactorial(n)==true)
    cout<<"1"<<endl;
    else{
      ll limit=binpow((ll)2,14);
      for(int i=1;i<=limit;i++)
      {
        str new=decimalToBinary(i);
      }
    }
}
return 0;
}
