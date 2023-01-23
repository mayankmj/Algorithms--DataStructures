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
    ll p1[3],p2[3];
    ll sum=0,sume=0;
    for(int i=0;i<3;i++)
    {
        cin>>p1[i];
        sum+=p1[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>p2[i];
        sume+=p2[i];
    }
    if(sum<sume)
    cout<<"SLOTH"<<endl;
    else if(sume<sum)
    cout<<"DRAGON"<<endl;
    else
    {
        if(p1[0]>p2[0])
        cout<<"DRAGON"<<"\n";
        else if(p1[0]<p2[0])
        cout<<"SLOTH"<<endl;
        else
        {
            if(p1[1]>p2[1])
            cout<<"DRAGON"<<endl;
            else if(p1[1]<p2[1])
            cout<<"SLOTH"<<endl;
            else
            cout<<"TIE"<<endl;
        }
    }
}
return 0;
}
