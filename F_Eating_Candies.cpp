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
ll sum(vector<ll>&vec,ll first)
{
    ll sum=0;
    for(int i=0;i<first;i++){
        sum+=vec[i];
    }
    return sum;
}
ll sum_r(vector<ll>&vec,ll first)
{
    vector<ll>v(vec);
    reverse(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<first;i++){
        sum+=v[i];
    }
    return sum;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    ll ans=INT_MIN;
    ll ma=0;
    ll j=n-1;
    ll sum_a=0,sum_b=0;
    for(int i=0;i<n-1;i++)
    {
        if(sum_a==sum_b){
            if(ma>ans) ans=ma; 
        }
        if(i==0){
            sum_a+=vec[i]; sum_b+=vec[j];ma+=2;
            j--;
        }
        else if(sum_a>sum_b){
            sum_b+=vec[j]; ma++;
            j--;
            i--;
        }
        else if(sum_b>sum_a)
        {
            sum_a+=vec[i]; ma++;
        }
        else {
            if(abs(i-j)<2){sum_a+=vec[i]; sum_b+=vec[j];
            j--; ma+=2;
            }
            j--;
        }
        if(sum_a==sum_b){
            if(ma>ans) ans=ma; 
        }
        //  cout<<sum_a<<" "<<sum_b<<" "<<ma<<endl;
         if(i>=j) break;
    }
    if(ans<0) cout<<"0"<<endl;
    else cout<<ans<<endl;
}
return 0;
}
