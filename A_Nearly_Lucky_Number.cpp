#include <bits/stdc++.h>
using namespace std;
#define int long long
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
int n;
cin>>n;
int flag=0,d=0,c=0,i=1;
int digit=log10(n)+1;
//cout<<n<<endl;
while(n>0)
{
    int temp=n%10;
    //cout<<temp<<endl;
    if(temp==4)
    {
        c++;
    }
    if(temp==7)
    {
        d++;
       // cout<<n<<endl;
    }
    n=n/10;
    i++;
}
//cout<<c<<d<<endl;
if((c+d)==7 || (c+d)==4)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
