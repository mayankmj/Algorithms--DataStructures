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
    ll n;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)
    cin>>vec[i];
    ll one=0,other=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==1)
        one++;
        else
        other++;
    }
    if(other==0 || one==0)
    cout<<"No"<<endl;
    //else if((one==other && one==2) || (one==3 &&other==1))
    //cout<<"Yes"<<endl;
   // else if(abs(one-other)<2)
   // cout<<"Yes"<<endl;
   // else if(abs(one-other)==2 && other%2==1)
   // {
    //    if(other*2-1==one || other*2-2==one)
       // cout<<"Yes"<<endl;
  //      else
//        cout<<"No"<<endl;
   // }
    else if(abs(one-other)<2)
    cout<<"Yes"<<endl;
    else if(abs(one-other)==2 && one%2==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
return 0;
}
