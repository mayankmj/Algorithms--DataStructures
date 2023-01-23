#include <bits/stdc++.h>
#include <cmath>
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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int p,a,b,c,x,y,z;
    cin>>p>>a>>b>>c;
    if(p%a!=0)
     x=p/a+1;
    else
     x=p/a;
    if(p%b!=0){
         y=p/b+1;
    }
    else
     y=p/b;
    if(p%c!=0)
    {
         z=p/c+1;
    }
    else
     z=p/c;
   // cout<<x<<y<<z<<endl;
    a=a*x;
    b=b*y;
    c=c*z;
   // cout<<a<<b<<c<<endl;
    int m=(a-p);
    int n=(b-p);
    int o=(c-p);
  //  cout<<m<<n<<o<<endl;
    int w=min(m,n);
    cout<<min(w,o)<<endl;
}
return 0;
}
