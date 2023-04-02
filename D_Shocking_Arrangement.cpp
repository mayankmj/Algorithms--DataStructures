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
    vector<ll>vec(n); cin>>vec;
    priority_queue<ll>positive; // max heap
    priority_queue<ll,vector<ll>,greater<int>>negative;
    ll pos_s=0,neg_s=0;
    for(auto &x:vec){
        if(x>=0) pos_s++;
        else neg_s++;
        positive.push(x); negative.push(x);
    }

    ll sum=0,pos_sum=0;
    vector<ll>ans;
    // ll pos_s=positive.size() ,neg_s=negative.size();
    ll temp=positive.top() - negative.top(),flag=0;
    // cout<<temp<<" "<<endl;
    while(ans.size()<n){
        ll tt;
        if(pos_s>neg_s)
        {
            tt=positive.top();
            sum+=tt;
        }
        else if(neg_s>pos_s)
        {
            tt=negative.top();
            sum+=tt;
        }
        else{
            ll tt2=positive.top(); sum+=tt2;
            if(sum<temp){
                sum-=tt2;
                ll tt1=positive.top(); positive.pop();
                ans.pb(tt1); sum+=tt1;
                if(abs(sum)>=temp) flag=1;
                if(ans.size()<n){
                ll tt2=negative.top(); negative.pop();
                ans.pb(tt2); sum+=tt2;
                }
            }
            else{
                sum-=tt2;
                ll tt2=negative.top(); negative.pop();
                ans.pb(tt2); sum+=tt2;
                if(abs(sum)>=temp) flag=1;
                if(ans.size()<n){
                ll tt1=positive.top(); positive.pop();
                ans.pb(tt1);sum+=tt1;
                }
            }
            if(abs(sum)>=temp) flag=1;
            continue;
        }
        pos_sum=abs(sum);
        // cout<<pos_sum<<endl;
        if(pos_sum>=temp){
            if(sum>=0){
            sum-=tt;
            ll tt1=negative.top(); negative.pop();
            sum+=tt1;
            ans.pb(tt1);
            neg_s--;
            }
            else{
                sum-=tt;
                ll tt1=positive.top(); positive.pop();
                sum+=tt1;
                ans.pb(tt1);
                pos_s--;
            }
        }
        else{
            ans.pb(tt);
           if(pos_s>neg_s){ positive.pop();
            pos_s--;
           }
           else{
            negative.pop();
            neg_s--;
           }
        }
         pos_sum=abs(sum);
        if(pos_sum>=temp){
            flag=1;
            break;
        }
        // cout<<sum<<endl;
    }
    if(flag) cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        for(auto &x:ans) cout<<x<<" ";
        cout<<endl;
    }
}
return 0;
}