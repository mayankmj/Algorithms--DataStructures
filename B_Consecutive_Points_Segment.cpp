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
#define vecay_input(n,vec) for(int i=0;i<n;i++) cin>>vec[i] 
#define vecay_output(n,vec) for(int i=0;i<n;i++) cout<<vec[i]<<endl
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
    vector<ll>vec;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    }
    vector<ll>diff;
    ll flag=0,three=0,to=0;
    for(int i=1;i<n;i++)
    {
        diff.push_back(vec[i]-vec[i-1]);
    }
   // for(auto x:diff)
    //cout<<x<<" ";
   /* for(int i=0;i<n-1;i++)
    {
        if(diff[i]==3)
        three++;
        else if(diff[i]==2 && i!=0 && i!=(n-2))
        {
            if(diff[i-1]!=1 || diff[i+1]!=1)
            flag=1;
        }
        else if(diff[i]>3)
        flag=1;
        if(diff[i]==2)
        to++;
    }*/
    ll sum=0;
    for(int i=1;i<n;i++)
    {
         sum+=vec[i]-vec[i-1]+1;
    }
    if(sum>2)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
return 0;
}
