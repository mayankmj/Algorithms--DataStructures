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
    ll a,b;
    cin>>a>>b;
    ll maxx=max(a,b);
    ll minn=min(a,b);
    if(a==b) cout<<a<<endl;
    else if(a==b && a==0) cout<<"0"<<endl; 
    else if(a==0 || b==0) cout<<"-1"<<endl;
    else {
         // cout<<(long long int)(log2(max(a,b)))+max(a,b)<<endl;
         ll temp=abs((maxx-minn))/maxx;
         ll temp_2=abs(maxx-minn)/minn;
        ll q=(long long int)log2(maxx/minn);
        ll sum=minn;
        for(int i=0;i<q;i++) sum*=2;
        if(sum!=maxx)
        q++;
        cout<<q+maxx<<endl;
    }
}
return 0;
}
