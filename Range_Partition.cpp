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

vector<ll>vec;
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

int tab[2000][2000];
 
// Check if possible subset with
// given sum is possible or not
int subsetSum(int a[], int n, int sum)
{

    if (sum == 0)
        return 1;
         
    if (n <= 0)
        return 0;
   
  
    if (tab[n - 1][sum] != -1)
        return tab[n - 1][sum];
   
 
    if (a[n - 1] > sum)
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum);
    else
    {
         
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum) ||
                       subsetSum(a, n - 1, sum - a[n - 1]);
    }
}
int32_t main(){
fast
ll t=1;
cin>>t;
ll count=1;
while(t--){
    ll n,x,y;
    cin>>n>>x>>y; 
    ll sum[n],s=0;
    for(int i=0;i<n;i++)
    {
        s+=i+1;
        sum[i]=s;
    }
    x=x+y;
    if(s%x==0)
    {
         cout<<"Case #"<<count<<": "<<"POSSIBLE"<<endl;
         x=s/x;
         y=y*x;
         vector<ll>v(n+3);
         for(int i=1;i<=n;i++)
         {
            v[i-1]=i;
         }
         for(int i=n-1;i>=0;i--){
             if(v[i]<=y)
             y=y-v[i],
             v[i]=0;
         }
         ll ans=0;
         for(auto it:v)
         {
             if(it!=0)
             ans++;
         }
         cout<<ans<<endl;
         for(int i=0;i<n;i++)
         {
             if(v[i]>0 || v[i]<0)
             cout<<i+1<<" ";
         }
         cout<<endl;
    }
    else
    cout<<"Case #"<<count<<": "<<"IMPOSSIBLE"<<endl;
    count++;
}
return 0;
}
// #include <bits/stdc++.h>
// #define nl "\n"
// #define ll long long
// #define loop x == '#' x == '@' ||x == '*'  x == '&'
// #define loop1  x >= 'A' && x <= 'Z'
// #define loop2 s.size() < 7
// #define loop3
// #define loop4
// #define pb push_back
// #define all(v) v.begin(),v.end()
// #define vll vector<ll>

// #define inf 1999999996000000010

// using namespace std;


// void solve()
// {
//      long long x,y,z;
//          cin>>x>>y>>z;
//           y = y + z;
//           ll val = 0;
//         long long tot =(x*(x+1))/2;
      
       
         
//         if((tot%y) == 0 )
//         {
//             cout<<"POSSIBLE"<<endl;
//             y = tot/y;
//              z  = z*y;
//             tot = x;         
//             vll vc(tot+3);
//             for(int i = 1; i <= tot; i++) {
//              if(i >= 1) {
//                 vc[i-1]=i;
//             }
//         }            
//             for(ll i = tot-1;i >= 0; i--)
//             {
//                 if(vc[i] <= z)
                
//                     z = z - vc[i],
//                     vc[i]=0;
                
//             }         
//             for(auto it: vc){
//                 if(it != 0)
//                    ++val;
//             }            
//             cout<<val<<endl;
//             for(int i =0; i < tot; ++i) {
//                 if(vc[i] > 0 || vc[i] < 0) {
                
//                     cout<<i+1<<" ";
//                 }              
//             }
//             cout<<endl;
//         }
//         else{
//             cout<<"IMPOSSIBLE";
//             cout << endl;
//         } 
//         }
// int main() {
// ll k;
//   cin >> k;
//  ll temp = k;
//  while (k--) {
//   cout << "Case #" << temp - k << ": ";
//   solve();
//  }

//  return 0;
// }

