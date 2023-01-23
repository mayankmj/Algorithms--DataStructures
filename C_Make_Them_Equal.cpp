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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    string a;
    cin>>n>>a;
    string s;
    cin>>s;
    ll x=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=a[0])
        {
            flag=1;
        }
        else
        x=i;
    }
    if(flag==0)
    cout<<"0"<<endl;
    else if(x>=n/2)
    {
        cout<<"1"<<endl<<x+1<<endl;
    }
    else
    cout<<"2"<<endl<<n<<" "<<n-1<<endl;
}
return 0;
}
