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
#define debug1(x) cout<<x<<endl;
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
    ll n,x;
    cin>>n>>x;
    vector<int>final;
    ll n_sum=n*(n+1)/2;
    ll sum=0;
        for(int i=1;i<=(n-2);i++)
        {
            if(sum>1000){
            final.push_back(-i);
            sum+=(-i);}
            else
            {
                 sum+=i;
                final.push_back(i);
            }
        }
        ll z=0;
        if(n>1){
            if((x*n-sum>1000 || (x*n-sum)<-1000))
            {
                ll q=n*x-sum;
                final.push_back((q+1)/2);
                final.push_back((q-1)/2);
            }
            else{
        final.push_back(z);
        final.push_back(x*n-sum);
            }
            if(n==1)
            final.push_back(x);
        }
        for(auto x:final)
        {
            cout<<x<<" ";
        }
        cout<<endl;
}
return 0;
}
