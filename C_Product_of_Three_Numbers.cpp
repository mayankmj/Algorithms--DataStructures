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
    ll n;
    cin>>n;
    ll a=1,b=1,c=1;
    ll temp=n;
    for(int i=2;i*i<=(n);i++)
    {
        if(n%i==0)
        {
            a=i;
            break;
        }
    }
    n=n/a;
    for(int i=a+1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            b=i;
            n=n/i;
            break;
        }
    }
  //  ll u=ceil(sqrt(temp));
  //  cout<<u<<endl;
   /* for(int i=a+1;i*i<=temp;i++)
    {
        cout<<b<<" "<<i<<endl;
        if(n%i==0)
        {
            if(b==1)
            b=i;
            if(a*b*i==temp && b!=i)
            {
                c=i;
                break;
            }
        }
        if(c!=1)
        break;
    }*/
   // cout<<"\n"<<n<<endl;
    //cout<<a<<b<<c<<endl;
    c=n;
    if(a!=1 && b!=1 && c!=1 && a!=b && b!=c && c!=a && c!=1)
    {
        cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}
