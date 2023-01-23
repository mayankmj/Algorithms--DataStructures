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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
/*long double rasing (int x,int y)
{
     if(x<0)
    {
        if(y%2==0){
        x=-x;
        int r=pow(x,y);
        return r;
        }
        else
        {
            x=-x;
            double r=pow(x,y);
            r=-r;
            return r;
        }
    }
    else 
    {
        double r=pow(x,y);
        return r;
    }
}*/
int32_t main(){
fast
int a,b,c;
cin>>a>>b>>c;
if(a<0 || b<0)
{
    if(c%2==0){
    if(a<0)
    a=-a;
    if(b<0)
    b=-b;
    }
}

//cout<<first<<" "<<second<<endl;
if(a>b)
{
    cout<<">"<<endl;
}
else if(a<b)
{
    cout<<"<"<<endl;
}
else
cout<<"="<<endl;
return 0;
}
