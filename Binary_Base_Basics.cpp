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
bool check_pal(string s)
{
    ll l=s.size();
    ll j=l-1;
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[j])
        return false;
        j--;
    }
    return true;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
    {
        if(check_pal(s))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else if(n==1)
    cout<<"YES"<<endl;
    else
    {
        ll one=0,zero=0,c=0;
         ll l=s.size();
        ll j=l-1;
        for(int i=0;i<l/2;i++)
        {
            if(s[i]!=s[j])
            c++;
            j--;
        }
       // cout<<c<<endl;
        if(k>=c && (k-c)%2==0)
        cout<<"YES"<<endl;
        else if(n%2!=0 && k>=c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}
return 0;
}
