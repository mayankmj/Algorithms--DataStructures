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
int gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int i=1;
    if(n==k)
    cout<<"1"<<endl;
    else if(n>k)
    {
        if(n%k==0)
        cout<<n/k<<endl;
        else
        {
            int a=lcm(n,k);
            cout<<a/k<<endl;
        }

    }
    else{
        if(k%n==0)
        cout<<"1"<<endl;
        else{
            int a=lcm(k,n);
        cout<<a/k<<endl;
        }
    }
}
return 0;
}
