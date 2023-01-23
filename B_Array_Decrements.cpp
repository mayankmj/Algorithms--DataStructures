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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll flag=0;
    vector<ll>a,b,diff;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    ll b_zer=0;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        b.pb(temp);
        if((a[i]-b[i])<0)
        {
            flag=1;
        }
        if(b[i]==0)
        b_zer++;
    }
    if(flag==1) cout<<"NO"<<endl;
    else if(b_zer==n) cout<<"YES"<<endl;
    else{
        ll counter=0;
        while(b[counter]==0)
        counter++;
        ll di=a[counter]-b[counter];
        for(int i=0;i<n;i++){
            if((a[i]-b[i])!=di){
                if(b[i]==0 && (a[i]-b[i])<=di)
                flag=0;
                else{
                    flag=1;
                break;
                }
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
return 0;
}
