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
    char arr[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    ll start=0; bool flag=1;
    ll ss=0;
    if(arr[0][0]=='B' && arr[1][0]=='B'){
        if(arr[0][1]=='B') {start=0; arr[0][1]='W';}
        else if(arr[1][1]=='B') {start=1; arr[1][1]='W';}
        else flag=true;
        ss=1;
    }
    else if(arr[0][0]=='B') {start=0; arr[0][0]='W';}
    else if(arr[1][0]=='B') {start=1; arr[1][0]='W';}
    else flag=0;
    ll i=1;
    while(i<n)
    {
        if(ss==1){
            ss=0; i++;continue;
        }
        if(start==0){
            // arr[start][i]='W';
            if(arr[start+1][i]=='B') {arr[start+1][i]='W';start=1;}
            else if(arr[start][i+1]=='B') arr[start][i+1]='W';
            else flag=0;
        }
        else{
            // arr[start][i]='W';
            if(arr[start-1][i]=='B') {arr[start-1][i]='W';start=0;}
            else if(arr[start][i+1]=='B') arr[start][i+1]='W';
            else flag=0;
        }
        i++;
    }
    for(int i=0;i<2;i++){
        for(int j=1;j<n-1;j++) {
            cout<<arr[i][j]<<" ";
            if(arr[i][j]=='B') flag=0;
        }
        cout<<endl;
    }
    if(!flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}
