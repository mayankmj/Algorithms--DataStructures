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
    ll n,H,M;
    cin>>n>>H>>M;
    ll x_min=INT_MAX,m_min=INT_MAX;
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;   
        vec.pb(make_pair(x,y));
    }
    // sort(vec.begin(),vec.end());
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i].first==H && vec[i].second==M)
        {
            flag=1;
            break;
        } 
    }
    if(flag==1) cout<<"0 0"<<endl;
    else{
    ll ans1=INT_MAX,ans2=INT_MAX,diff1,diff2;
    for(int i=0;i<n;i++)
    {
        if(vec[i].first>H)
        {
            diff1=vec[i].first-H;
            diff2=vec[i].second-M;
            if(diff2<0)
            {
                diff1--;
                diff2=60+diff2;
            }
        }
        else if(vec[i].first==H && vec[i].second>M)
        {
            diff1=0; diff2=vec[i].second-M;
        }
        // else if(H-vec[i].first==1)
        // {
        //     if(M>vec[i].second)
        //     {
        //         diff1=1;diff2=-vec[i].second+M;
        //     }
        //     else
        //     {
        //         diff1=0; diff2=60-M+vec[i].second;
        //     }
        // }
        else
        {
            diff1=23-H+vec[i].first;
            diff2=60-M + vec[i].second;
            if(diff2>59)
            {
                diff2=diff2%60;
                diff1++;
            }
            // if(diff2<0)
            // {
            //     diff1--;
            //     diff2=abs(diff2);
            // }
        }
        if(ans1>diff1)
        {
            ans1=diff1;ans2=diff2;
        }
        else if(ans1==diff1 && ans2>diff2)
        {
            ans2=diff2;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    }
}
return 0;
}
