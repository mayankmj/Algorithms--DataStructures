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
int a=0,b=0,c=0;
int p[10000],pe[10000],m[10000];
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]==1){
    //p++;
    p[a]=i+1;
    a++;
   // cout<<p[a-1]<<endl;
    }
    else if(arr[i]==2){
   // m++;
    m[b]=i+1;
    b++;
    }
    else{
   // pe++;
    pe[c]=i+1;
    c++;
    }
}
if(a==0 || b==0 || c==0)
cout<<"0"<<endl;
else{
    /*for(int i=0;i<a;i++)
    {
        cout<<p[a]<<endl;
    }*/
cout<<min(a,min(b,c))<<endl;
//cout<<a<<b<<c<<endl;
while(a>0 && b>0 && c>0)
{
    cout<<p[a-1]<<" "<<m[b-1]<<" "<<pe[c-1]<<endl;
    a--;
    b--;
    c--;
}

}
return 0;
}
