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
    ll n,q;
    cin>>n>>q;
    map<ll,vector<ll>>mpp;
    map<ll,vector<ll>>:: iterator it1;
    vector<ll>vec(n);
    ll mx=INT_MIN,mx_index=-1;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        if(vec[i]>mx)
        {
            mx=vec[i];
            mx_index=i;
        }
    }
    vector<ll>pre(n); ll flag=0;
    pre[0]=vec[0];
    for(int i=1;i<n;i++)
    {
        if(vec[i]!=mx && flag==0)
        pre[i]=max(pre[i-1],vec[i]);
        else{
            flag=1;
            pre[i]=mx;
        }
    }
    pre[0]=-1;
    for(int i=0;i<n;i++) mpp[pre[i]].pb(i);
    map<ll,vector<ll>>ans;
    for(auto &x:mpp){
        ans[x.first].pb(mpp[x.first][0]);
        ll size=mpp[x.first].size()-1;
        ans[x.first].pb(mpp[x.first][size]);
    }
    // for(auto &x:ans){
    //     cout<<x.first<<" ";
    //     ll m=ans[x.first].size();
    //     for(int j=0;j<m;j++) cout<<" ff"<<ans[x.first][j]<<" ";
    //     cout<<endl;
    // }
    for(int i=0;i<q;i++)
    {
        ll x,y; cin >> x >> y; 
        if(vec[x-1]!=mx)
        {
            if(ans[vec[x-1]].size()==0) cout<<"0"<<endl;
            else if(ans[vec[x-1]][0]>y) cout<<"0"<<endl;
            else if(ans[vec[x-1]][1]<=y) cout<<mpp[vec[x-1]].size()<<endl;
            else {
                if(ans[vec[x-1]][0]==1) cout<<y<<endl;
                else cout<<y-ans[vec[x-1]][0]+1<<endl;
            }
        }
        else
        {
            if(y<mx_index) cout<<"0"<<endl;
            else { ll temp=mx_index;
            if(temp==0) temp++;
                cout<<y-temp+1<<endl;
            }
        }
        // cout<<"dd"<<endl;
    }
}
return 0;
}
// if(vec[x-1]!=mx)
//         {
//             ll flag=0;
//             ll s=mpp[vec[x-1]].size(); 
//             if(y>(s/2)){
//             for(int j=s-1;j>=0;j--)
//             {
//                 if(y>=mpp[vec[x-1]][j]){
//                     flag=1; cout<<j+1<<endl;
//                     break;
//                 }
//             }
//             }
//             else{
//                 // cout<<y<<endl;
//                 for(int j=0;j<s;j++)
//                 {
//                     if(y<mpp[vec[x-1]][j]){
//                         flag=1; cout<<j<<endl; break;
//                     }
//                 }
//             }
//             if(flag==0) {
//                 if(s==0) cout<<"0"<<endl;
//                 else if(y<mpp[vec[x-1]][0] || s==0) cout<<"0"<<endl;
//                 else cout<<mpp[vec[x-1]][s-1]<<endl;
//             }