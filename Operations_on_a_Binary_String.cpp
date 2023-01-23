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
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
// bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second > b.second);
// }


// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
//     ll n,coins;
//     cin>>n>>coins;
//     string s; cin>>s;
//     vector<pair<ll,ll>>vec;
//     ll flag=0,in,out;
//     ll one=0,zero=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='1') one++;
//         else zero++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='0' && flag==0)
//         {
//             in=i; flag=1;
//         }
//         else if(s[i]=='1' && flag==1)
//         {
//             out=i;flag=0;
//             vec.pb(make_pair(out-in,2*(out-in)+1));
//         }
//     }
//     if(flag==1) vec.pb(make_pair(n-in,((n-1-in)*2+1)));
//     sort(vec.begin(),vec.end(),sortbysec);
//     ll ans=0;
//     for(auto &x:vec)
//     {
//         if(x.second<=coins){
//             ans+=x.first;
//             coins=coins-x.second;
//         }
//     }
//     if(coins!=0)
//     {
//         if(coins==3 || coins==4) ans++;
//         else if(coins<=5) {
//             ans+=coins/2;
//              if(coins%2==0) ans--;
//         }
//     }
//     cout<<min(ans+one,n)<<endl;
// }
// return 0;
// }
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
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
// bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}


// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second > b.second);
// }


// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
//     ll n,coins;
//     cin>>n>>coins;
//     string s; cin>>s;
//     vector<pair<ll,ll>>vec;
//     ll flag=0,in,out;
//     ll one=0,zero=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='1') one++;
//         else zero++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='0' && flag==0)
//         {
//             in=i; flag=1;
//         }
//         else if(s[i]=='1' && flag==1)
//         {
//             out=i;flag=0;
//             vec.pb(make_pair(out-in,2*(out-in)+1));
//         }
//     }
//     if(flag==1) vec.pb(make_pair(n-in,((n-1-in)*2+1)));
//     sort(vec.begin(),vec.end(),sortbysec);
//     ll ans=0;
//     for(auto &x:vec)
//     {
//         if(x.second<=coins){
//             ans+=x.first;
//             coins=coins-x.second;
//         }
//     }
//     if(coins!=0)
//     {
//         if(coins==3 || coins==4) ans++;
//         else if(coins<=5) {
//             ans+=coins/2;
//              if(coins%2==0) ans--;
//         }
//     }
//     cout<<min(ans+one,n)<<endl;
// }
// return 0;
// }
// // #include <bits/stdc++.h>
// // #define range(i,n) for(int i= 0; i < (n); i++) 
// // typedef long long int ll;
// // #define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
// // #define pb push_back
// // #define mp make_pair
// // #define F first
// // #define S second
// // #define in insert
// // #define endl "\n"
// // using namespace std;
 
// // signed main() {
// //     ios::sync_with_stdio(false); cin.tie(0);
// // int testcase=1;
// // cin>>testcase;
// // for(int test=0;test<testcase;test++)
// // {
// //     int n,k;
// //     cin>>n>>k;
// //     string s;
// //     cin>>s;
// //     int c=0;
// //     int ans=0;
// //     int flag=0;
// //     vector<int>v;

// //     range(i,n){
// //          if(s[i]=='1')ans++;
// //         if(s[i]=='0'){
// //             c++;
// //             flag=1;
            
// //         }
// //         else if(flag==1){
// //             v.pb(c);
// //             c=0;
// //             flag=0;
// //         }
// //     }
// //     sort(v.begin(),v.end(),greater<int>());
// //     for(int i=0;i<v.size();i++){
// //         int g;
// //         g=(k-1)/2;
// //         if(v[i]<g){
// //             ans+=v[i];
// //             k-=((v[i]*2)+1);
// //         }
// //         else{
// //             ans+=g;
// //             break;
// //         }
// //     }


// //     cout<<ans<<endl;
// // }

// //  return 0;
// // }



#include <bits/stdc++.h>
#define range(i,n) for(int i= 0; i < (n); i++) 
typedef long long int ll;
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define in insert
#define endl "\n"
using namespace std;
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
int testcase=1;
cin>>testcase;
for(int test=0;test<testcase;test++)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;
    int ans=0;
    int flag=0;
    vector<int>v;

    range(i,n){
         if(s[i]=='1')ans++;
        if(s[i]=='0'){
            c++;
            flag=1;
            
        }
        else if(flag==1){
            v.pb(c);
            c=0;
            flag=0;
        }
    }
    if(c!=0) v.pb(c);

    sort(v.begin(),v.end(),greater<int>());

    for(int i=0;i<v.size();i++){
        int g;
        g=(k-1)/2;
        if(v[i]<g){
            ans+=v[i];
            k-=((v[i]*2)+1);
        }
        else{
            ans+=g;
            break;
        }
    }


    cout<<ans<<endl;
}

 return 0;
}