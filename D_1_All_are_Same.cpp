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
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
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
    vector<long long int>vec;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    }
    vector<ll int>diff;
    sort(vec.begin(),vec.end());
    for(int i=0;i<(n-1);i++)
    {
        ll a=vec[i+1]-vec[i];
        diff.push_back(a);
    }
   // cout<<"grg"<<endl;
    sort(diff.begin(),diff.end());
    ll min,i,flag=0;
    for(auto x:diff)
    {
        if(x>0){
        min=x;
        break;}
    }
    for(i=min;i>=1;i--)
    {
         flag=0;
        for(auto x:diff)
        {
            if(x%i!=0)
            {
               // cout<<"ererererererererererererererg"<<i<<" "<<x<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        break;
    }
    if(vec[0]==vec[n-1])
    cout<<"-1"<<endl;
    else if(flag==0)
    cout<<i<<endl;
    else
    cout<<"1"<<endl;
}
return 0;
}
