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
    if(n==1 || m==1)
    {
            ll max_d=abs(1-n)+abs(m-1);
            if(max(n,m)%2==0){
            ll min_d=(max(n,m)/2);
            if(max_d-min_d>=1)
            {
                for(int i=min_d;i<max_d;i++)
                {
                    for(int j=0;j<2;j++)
                    cout<<i<<" ";
                }
            }
            cout<<max_d<<" "<<max_d;
            }
            else{
                 ll max_d=abs(1-n)+abs(m-1);
            ll min_d=(max(n,m)/2);
            cout<<min_d<<" ";
            if(max_d-min_d>=1)
            {
                for(int i=min_d+1;i<max_d;i++)
                {
                    for(int j=0;j<2;j++)
                    cout<<i<<" ";
                }
            }
            cout<<max_d<<" "<<max_d;
            }
    }
    else if(n%2==0 && m%2==0)
    {
        if(n==2 && m==2)
        {
            cout<<"2"<<" "<<"2"<<" "<<"2"<<" "<<"2"<<" ";
        }
        else{
        ll max_d=(n-1)+(m-1);
        ll min_d=m/2+n/2;
        cout<<min_d<<" "<<min_d<<" "<<min_d<<" "<<min_d<<" ";
        if(max_d-min_d>1){
        for(int i=min_d+1;i<max_d;i++)
        {
            for(int j=0;j<8;j++)
            cout<<i<<" ";
        }
        }
        for(int i=0;i<4;i++)
        cout<<max_d<<" ";
        }       
    }
    else if(n%2!=0 && m%2!=0)
    {
        ll max_d=n-1+m-1;
        ll min_d=n-(n/2+1)+m-(m/2+1)+1;
        cout<<min_d-1<<" ";
        for(int i=0;i<4;i++)
        cout<<min_d<<" ";
        if(max_d-min_d>1){
        for(int i=min_d+1;i<max_d;i++)
        {
            for(int j=0;j<8;j++)
            cout<<i<<" ";
        }
        }
        for(int i=0;i<4;i++)
        cout<<max_d<<" ";    
    }
    else
    {
        if((n==2 && m==3) || (m==2 && n==3))
        {
            cout<<"2"<<" "<<"2"<<" "<<"3"<<" "<<"3"<<" "<<"3"<<" "<<"3";
        }
        else{
        ll max_d=n-1+m-1;
        ll min_d=abs(1-(n/2+1))+abs(1-(m/2+1));
        cout<<min_d<<" "<<min_d<<" ";
        for(int i=0;i<6;i++)
        cout<<min_d+1<<" ";
        if(max_d-min_d>2)
        {
            for(int i=min_d+2;i<max_d;i++)
          {
            for(int j=0;j<8;j++)
            cout<<i<<" ";
        }
        }
        for(int i=0;i<4;i++)
        cout<<max_d<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
