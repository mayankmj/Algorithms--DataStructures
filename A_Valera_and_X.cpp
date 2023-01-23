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
ll n;
cin>>n;
char arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
char temp=arr[0][1],ae=arr[0][0];
ll b=0,c=0;
//cout<<temp<<endl;
ll extra=n-1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if((i==j && arr[i][j]==ae))  {
        b++;
      //  cout<<arr[i][j]<<" "<<i<<j<<"\n";
        }
        else if(arr[i][j]==ae && (abs(j-i)%2==0)){
        b++;
       // cout<<" "<<arr[i][j]<<" "<<i<<j<<endl;
        extra--;
        }
        else{
            if(arr[i][j]==temp)
            {
            c++;
          //  cout<<arr[i][j]<<i<<j<<endl;
            }
        }
        
    }
   // temp--;
}
//cout<<b<<" "<<c<<endl;
if(b==(n+(n-1)) && c==(n*n-(2*n-1)) && ae!=temp)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
