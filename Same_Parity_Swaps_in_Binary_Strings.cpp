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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll even_one=0,even_zero=0,odd_one=0,odd_zero=0;
    vector<int>odd,even;
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            even.push_back(s[i]);
        }
        else{
            odd.push_back(s[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    reverse(odd.begin(),odd.end());
    string a;
    ll j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=even[j];
            j++;
        }
        else{
            a[i]=odd[k];
            k++;
        }
    }
    reverse(even.begin(),even.end());
    reverse(odd.begin(),odd.end());
    string b;
     j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
        b[i]=even[j];
        j++;
        }
        else{
            b[i]=odd[k];
            k++;
        }
    }
    ll x=0,y=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='0' && a[i+1]=='1')
        x++;
        else if(b[i]=='0' && b[i+1]=='1')
        y++;
    }
  //  cout<<a<<" "<<b<<endl;
    cout<<max(x,y)<<endl;
}
return 0;
}
