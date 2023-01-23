#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define pi (3.141592653589)
#define mod 1000000007
//#define int long long
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
long long int fact(long long int n)
{
    long long int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
main(){
fast
long long int n;
cin>>n;
long long int c=0,sum=0;
unsigned char arr[100][100];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]=='C')
        c++;
    }
    if(c>2){
        int g=c*(c-1)/2;
        if(g<0)
        g=-g;
     sum=sum+g;
    }
    else if(c>1)
    sum=sum+1;  
 //   cout<<sum<<" "<<i<<" "<<endl;
    c=0;
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j][i]=='C')
        c++;
    }
    if(c>2){int g=c*(c-1)/2;
        if(g<0)
        g=-g;
     sum=sum+g;}
    else if(c>1)
    sum=sum+1; 
   // cout<<sum<<" "<<i<<" "<<endl;
    c=0;
}
cout<<sum<<endl;
return 0;
}
