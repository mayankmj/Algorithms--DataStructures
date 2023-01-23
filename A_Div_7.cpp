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
bool check(ll a,ll b)
{
    a=a/10;
    ll one_digit=a%10;
    if(one_digit==b)
    return true;
    else
    return false;

}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll flag_n=0,flag_temp=0;
    if(n%7==0)
    cout<<n<<endl;
    else if(log10(n)==0)
    cout<<"7"<<endl;
    else
    {
        ll d=log10(n)+1,i=1;
        ll x=n%10;
        ll temp=n;
        n=n/10;
        ll y=n%10;
        n=temp;
        while(n%7!=0 && temp%7!=0)
        {
            if(flag_temp==0)
            temp++;
            if(flag_n==0)
            n--;
            if(check(temp,y)==false){
            flag_temp=1;
            temp--;}
            if(check(n,y)==false){
            flag_n=1;
            n++;}

        }
        if(n%7==0 && flag_n==0)
        cout<<n<<endl;
        else
        cout<<temp<<endl;
    }
}
return 0;
}
