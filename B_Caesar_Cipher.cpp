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


int32_t main(){
fast
string a,b;
cin>>a>>b;
//sort(a.begin(),a.end());
//sort(b.begin(),b.end());
int c=b[0]-a[0];
int d=a[0]-b[0];
int front=1,back=1;
if(c<0)
c=26+c;
for(int i=1;i<a.size();i++)
{
    int x=0;
    if(b[i]-a[i]<0)
    {
        x=26+(b[i]-a[i]);
    }
    if(b[i]-a[i]==c || x==c)
    front++;
  //  cout<<b[i]-a[i]<<" "<<x<<endl;
}
//cout<<front<<" "<<back<<endl;
if(front==a.size() || back==a.size())
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
