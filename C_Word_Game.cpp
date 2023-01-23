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




bool search_v2(string s,vector<string>v2,ll n)
{
    for(int i=0;i<n;i++)
    {
        if(v2[i]==s){
            return true;
        }
    }
    return false;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    ll a=0,b=0,c=0;
    vector<string>v1,v2,v3;
    map<string,ll>mpp;
        for(int i=0;i<n;i++){
         string s1;
         cin>>s1;
          v1.pb(s1); 
          mpp[s1]++;
        }
         for(int i=0;i<n;i++){
         string s1;
         cin>>s1;
          v2.pb(s1);
          mpp[s1]++;
        }
          for(int i=0;i<n;i++){
         string s1;
         cin>>s1;
          v3.pb(s1);
          mpp[s1]++;
        }
     sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
         sort(v3.begin(),v3.end());
         for(int i=0;i<n;i++)
         {
            if(mpp[v1[i]]==1) a+=3;
            if(mpp[v1[i]]==2) a++;
            if(mpp[v2[i]]==1) b+=3;
            if(mpp[v2[i]]==2) b++;
            if(mpp[v3[i]]==1) c+=3;
            if(mpp[v3[i]]==2) c++;
         }

        //    for(auto &x:v1) cout<<x<<" ";   for(auto &x:v2) cout<<x<<" ";   for(auto &x:v3) cout<<x<<" ";
        //  for(int i=0;i<n;i++){
        //     if(search_v2(v1[i],v2,n)==true && search_v2(v1[i],v3,n)==false) { a++; b++;}
        //     if(search_v2(v1[i],v2,n)==false && search_v2(v1[i],v3,n)==true){ a++; c++;}
        //      if(search_v2(v2[i],v3,n)==true && search_v2(v2[i],v1,n)==false){ b++; c++;}
        //       if(search_v2(v2[i],v3,n)==false && search_v2(v2[i],v1,n)==false){ b=b+3;}
        //        if(search_v2(v1[i],v3,n)==false && search_v2(v1[i],v2,n)==false){ a=a+3;}
        //         if(search_v2(v3[i],v1,n)==false && search_v2(v3[i],v2,n)==false){ c=c+3;}

        // //   cout<<a<<" "<<b<<" "<<c<<endl;
        //  }
        // 
    
     cout<<a<<" "<<b<<" "<<c<<endl;
}
return 0;
}
