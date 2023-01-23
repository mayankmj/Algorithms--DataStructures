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
#define debug2(x,y) cout<<x<<;
#define debug3(x,y,z) cout<<x<<;
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
    ll flag=0,zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==0)
        zero++;
        else if(vec[i]==1)
        one++;
    }  
    if(one>0 && zero>0)
    cout<<"NO"<<endl;
    else if(one==n || zero==n)
    cout<<"YES"<<endl;
    else if(one>0){
        sort(vec.begin(),vec.end());
        for(int i=0;i<n-1;i++){
            if((vec[i+1]-vec[i])==1){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else
    cout<<"YES"<<endl;
}
return 0;
}
