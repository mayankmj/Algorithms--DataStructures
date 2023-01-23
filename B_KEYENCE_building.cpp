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
int n;
cin>>n;
int arr[n],c=0,sum=0,flag=0;
for(int i=1;i<=n;i++)
{
    int temp;
    cin>>temp;    
    for(int j=1;j<=500;j++)
    {
        for(int k=1;k<=500;k++)
        {
            if((3*j)+(3*k)+(4*(j*k))==temp)
            {
              //  cout<<j<<k<<temp<<endl;
                c++;
                temp=-1;
                break;
            }
        }
    }
    //sum=sum+c/2;
    flag=0;
    //c=c/2;
   // sum=sum+c/2;
   // c=0;
}
cout<<n-c<<endl;
return 0;
}
