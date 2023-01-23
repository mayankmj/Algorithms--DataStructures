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
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,x,y,d;
    cin>>n>>x>>y>>d;
    if(abs(y-x)%d==0)
    {
        cout<<abs(y-x)/d<<endl;
    }
    else if((y-1)%d==0 && (n-y)%d==0)
    {
         int a=((x)/d);
        if(x%d!=0)
        a++;
        int b=a+(y-1)/d;
        a=ceil((n-x)/d);
        if((n-x)%d!=0)
        a++;
      //  cout<<a<<endl;
        int c=a+(n-y)/d;
        cout<<min(b,c)<<endl;
    }
    else if((y-1)%d==0)
    {
        //cout<<"F"<<endl;
        int a=((x)/d);
        if(x%d!=0)
        a++;
       // cout<<a<<endl;
        cout<<a+(y-1)/d<<endl;
    }
    else if((n-y)%d==0)
    {
        int a=ceil((n-x)/d);
        if((n-x)%d!=0)
        a++;
      //  cout<<a<<endl;
        int c=a+(n-y)/d;
        cout<<c<<endl;
    }
    else
    cout<<"-1"<<endl;
}
return 0;
}
