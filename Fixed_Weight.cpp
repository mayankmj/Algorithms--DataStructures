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
  
int main(){
ll t=1;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    if(x<=n)
    cout<<"YES"<<endl;
    else
    {
            ll flag=0,j=n-1,max=0;
            for(int i=2;i<=n;i++)
            {
                if(x%i==0)
                {
                    ll a=i;
                    ll b=x/i;
                    if((a+b)<=(n+1))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                break;
            }
            if(flag==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
    }
}
return 0;
}
