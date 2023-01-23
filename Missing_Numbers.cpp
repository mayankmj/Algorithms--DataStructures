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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
bool isPerfectSquare(ll x)
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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n=4;
    ll arr[4];
    array_input(n,arr);
    sort(arr,arr+n);
    ll flag=1;
    if(arr[0]==0 && arr[1]==1 && arr[2]==1 && arr[3]==2){
    cout<<"1 1"<<endl;
    flag=0;}
    else if(arr[0]==0 && arr[1]==1 && isPerfectSquare(arr[3])==true)
    {
        ll q=ceil(sqrtl(arr[3]));
        if((q+q)==arr[2]){
        cout<<q<<" "<<q<<endl;
        flag=0;}
        else
        flag=1;
    }
    if(flag==1)
    {
        if(arr[0]<0)
        {
            ll extra=arr[2];
            if(arr[3]==(extra+1) && arr[2]==(extra) && arr[1]==0 && arr[0]==-(extra-1) && extra<=10000 && extra!=0)
            cout<<"1 "<<extra<<endl;
            else{
            ll a=(arr[2]+arr[0])/(2);
            ll b=arr[2]-a;
         //   cout<<a<<" "<<b<<endl;
            if(a==0 || b==0)
            cout<<"-1 -1"<<endl;
            else if(a*b==arr[3] && (a/b)==arr[1] && a<=10000 && b<=10000)
            cout<<a<<" "<<b<<endl;
            else
            cout<<"-1 -1"<<endl;
            }
        }
        else
        {
            ll temp=arr[0];
            if(arr[1]==(temp+1) && arr[2]==(temp+1) && arr[3]==temp+2 && temp<=10000 && temp!=0)
            cout<<temp+1<<" "<<1<<endl;
            else
            {
                ll a=(arr[2]+arr[1])/2;
                ll b=arr[2]-a;
               // cout<<a<<" "<<b<<endl;
               if(a==0 || b==0)
               cout<<"-1 -1"<<endl;
                else if(a*b==arr[3] && a/b==arr[0] && a<=10000 && b<=10000)
                cout<<a<<" "<<b<<endl;
                else
                cout<<"-1 -1"<<endl;
            }
        }
    }
}
return 0;
}
