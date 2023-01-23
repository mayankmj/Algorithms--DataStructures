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
unsigned int nextPowerOf2(unsigned int n)  
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return n;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    array_input(n,arr);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    ll x=nextPowerOf2(sum);
    if(x==sum)
    cout<<"0"<<endl;
    else
    {
        ll m_index=0;
        ll y=x-sum;
       // cout<<y<<endl;
      //  ll poer=ceil(log2(sum));
        //ll mini=*min_element(arr,arr+n);
        //ll m=(y+mini)/mini;
        ll mini=*min_element(arr,arr+n);
        ll muliplier=y/mini;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mini)
            {
                m_index=i+1;
                break;
            }
        }
        cout<<"1"<<endl;
        cout<<"1"<<" "<<muliplier+1<<endl<<m_index<<endl;
    }
}
return 0;
}
