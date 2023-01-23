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
bool check_prime(ll n)
{
    for(int i=3;i<n;i++)
    {
        if(n%i==0)
        return true;
    }
    return false;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
        {
            cout<<"1"<<endl<<s[i]<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
       // ll flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ll a=(s[i]-48)*10+s[j]-48;
                if(check_prime(a))
                {
                    cout<<"2"<<endl<<a<<endl;
                    flag=1;
                }
                if(flag==1)
                break;
            }
            if(flag==1)
            break;
        }
    }
}
return 0;
}
