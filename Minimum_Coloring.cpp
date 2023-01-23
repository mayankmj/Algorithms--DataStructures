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
    ll n,m;
    cin>>n>>m;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll p1=a+b;
    ll p2=c+d;
    ll flag=0;
    if(p1%2==p2%2) flag=1;
    if(flag==0)
    {
        ll first=2,second=1;
        if((a+b)%2==0){
            first=1;
            second=2;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i+j+2)%2==0)
                cout<<first<<" ";
                else
                cout<<second<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        ll first=3,second=1;
        if((a+b)%2==0){
            first=1;second=3;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c==(i+1) && d==(j+1))
                cout<<"2 ";
                else if((i+j+2)%2==0)
                cout<<first<<" ";
                else
                cout<<second<<" ";
            }
            cout<<endl;
        }
    }
}
return 0;
}
