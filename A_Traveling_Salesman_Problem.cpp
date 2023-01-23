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

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    int n;cin>>n;
    int sum=0;
    int arr[n];
    int a[n];
    int aa,b,c,d;
    aa=b=c=d=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];cin>>a[i];
       aa=max(aa,arr[i]);
        b=min(b,arr[i]);
        c=max(c,a[i]);
        d=min(d,a[i]);
    }
    // ll sun=0;
    for(int i=1;i<n;i++)
    {
        int aa=abs(arr[i]-arr[i-1]);
        int b=abs(a[i]-a[i-1]);
        sum+=(aa+b);
    }
//     int aa=abs(arr[n-1]-arr[0]);
//    int b=abs(a[n-1]-a[0]);
//     sum+=(aa+b);
// sort(arr,arr+n);sort(a,a+n);
// if(arr[n-1]<0) arr[n-1]=0;
// if(a[n-1]<0) a[n-1]=0;
// if(a[0]>0) a[0]=0;
// if(arr[0]>0) arr[0]=0;
cout<<2*(aa-b+c-d)<<endl;
    // sum+=abs(arr[n-1]-arr[0])+abs(a[n-1]-a[0]);
    // cout<<sum<<endl;
}
return 0;
}
