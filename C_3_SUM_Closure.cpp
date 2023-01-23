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
    ll n,z=0;
    cin>>n;
    vector<ll>vec(n),p,ne,zero;
    for(int i=0;i<n;i++) cin>>vec[i];
    for(auto x:vec)
    {
        if(x>0) p.pb(x);
        else if(x<0) ne.pb(x);
        else {
            zero.pb(0);
        z++;
        }
    }
   
    ll flag=0;
    if(p.size()>2 || ne.size()>2) cout<<"NO"<<endl;
    else if(z==n) cout<<"YES"<<endl;
    else{
        for(auto x:p) zero.pb(x);
        for(auto x:ne) zero.pb(x);
        // for(auto x:zero) cout<<x<<" ";
        ll s=zero.size();
        sort(zero.begin(),zero.end());
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                for(int k=j+1;k<s;k++)
                {
                    ll sum=zero[i]+zero[j]+zero[k];
                    flag=0;
                    for(int m=0;m<s;m++)
                    {
                        if(sum==zero[m])
                        {
                          //  cout<<sum<<" ";
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0) break;
                }
                if(flag==0) break;
            }
            if(flag==0) break;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
return 0;
}
