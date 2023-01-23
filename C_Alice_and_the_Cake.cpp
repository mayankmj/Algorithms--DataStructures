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
#define debug1(x) cout<<x<<endl;
#define debug2(x,y) cout<<x<<
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
ll decimalToBinary(ll N)
{
 
    // To store the binary number
    ll B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ll c = binpow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}

int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>vec;
    ll even=0,odd=0,sum=0;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.push_back(temp);
        sum+=vec[i];
    }
   // cout<<sum;
    multiset<ll> b={sum};
    multiset<ll> a(vec.begin(),vec.end());
    while(b.empty()==false)
    {
      //  ll *ptr=b;
        ll x= *--b.end();
        if(x<*--a.end()) {
            break;
        }
        else if(a.find(x)!=a.end())
        {
            a.erase(a.find(x));
           b.erase(--b.end());   
        }
        else
        {
            b.insert(x/2);
            b.insert((x+1)/2);
              b.erase(b.find(x));
        }
    }
    if(a.empty()==false)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
return 0;
}
