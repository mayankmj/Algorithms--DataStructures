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


bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int mode(int a)
{
    return (a%mod + mod) % mod;
}
int countSquares(int a, int b)
{
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,k;
    int sum=0,c=0,sume=0,f=0;
    cin>>n>>k;
    for(int i=n;i<k;i=i+9)
    {
        int temp=i+1;
        int tempo=i+9;
        while(temp>0)
        {
            sum=sum+temp%10;
            temp=temp/10;
        }
        while(tempo>0)
        {
            sume=sume+tempo%10;
            tempo=tempo/10;
        }
        cout<<sum<<" "<<sume<<endl;;
        f=f+countSquares(sum,sume);
    }
   // cout<<f<<endl;
    cout<<mode(f)<<endl;
}
return 0;
}
