#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int ji(int a,int b,int c)
{
    int d=1;
    while(b>0)
    {
        if(b%2!=0)
        {
            d=(d*a)%c;
        }
        a=(a*a)%c;
        b=b/2;
    }
    return d;
}
int ii(int a,int b)
{
    return(ji(a,b-2,b));
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int m=998244353;
    int a,b,c,d;
    a=((a)*(a+1))%m;
    b=(a*a)%m;
    b=(b*ii(2,m))%m;
    b=(b*(ii(2,m)))%m;
    cout<<(b*ii(n,m))%m<<endl;
}
return 0;
}
