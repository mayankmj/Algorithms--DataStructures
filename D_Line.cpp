// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pi (3.141592653589)
// #define mod 1000000007
// #define float double
// #define pb push_back
// #define mp make_pair
// #define ff first
// // #define ss second
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
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
// bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}





// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
//     ll n;
//     cin>>n;
//     string s; cin>>s;
//     vector<ll>vec;ll sum=0;
//      ll fl=0 ,fr=0;
//     vector<ll>first_r,first_l;
//     ll ss=0;
//     vector<ll>ans,vv;
//     map<char,ll>mpp;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='L') ss+=i;
//         else ss+=(n-1-i);
//         if(s[i]=='L' && (i<(n-1-i))) vv.pb(n-1-2*i);
//         else if(s[i]=='R' && i>(n-1-i)) vv.pb(2*i+1-n);
//         mpp[s[i]]++;
//         first_l.pb(n-1-i);
//         first_r.pb(i);
//     }
//     sort(vv.begin(),vv.end());
//     reverse(vv.begin(),vv.end());
//     sort(first_l.begin(),first_l.end());
//     //  ll sum=0;
//     for(int i=0;i<vv.size();i++)
//     {
//         sum+=vv[i];
//         ans.pb(ss+sum);
//     }
//     for(int i=vv.size();i<n;i++) ans.pb(ss+sum);
//     for(auto &x:ans) cout<<x<<" ";
//     cout<<endl;
//     //   cout<<sum<<endl;
//      ll mx=INT_MIN;
//     // ll x=0,y=first_r.size()-1;
//     // // cout<<fl<<" "<<fr<<endl;
    
//     // cout<<endl;
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
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}





int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    string s; cin>>s;
    ll sum=0; vector<ll>vec,v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L'){
            vec.pb(n-1-i);
            sum+=i;
            v.pb(i);
        }
        else{
            vec.pb(i);
            sum+=(n-1-i);
            v.pb(n-1-i);
        }
    }
    // sort(vec.rbegin(),vec.rend());
    // cout<<sum<<endl;
    
    vector<ll>diff;
    for(int i=0;i<n;i++)
    {
        diff.pb(vec[i]-v[i]);
    }
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(diff[i]>0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        for(int i=0;i<n;i++) cout<<sum<<" ";
    }
    else{
    ll mx=INT_MIN;
    sort(diff.rbegin(),diff.rend());
    for(int i=0;i<n;i++)
    {
        mx=max(mx,sum+diff[i]);
        cout<<mx<<" ";
        sum=mx;
    }
    }
    cout<<endl;
}
return 0;
}
