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
    string s;
    cin>>s;
   // cout<<s<<endl;
    ll n=s.size()-1;
    ll five=0,zero=0,fi=-1,final=-1,ze=0,fin=0,f1=0,f2=0;
    for(int i=n;i>=0;i--)
    {
      //  cout<<s[i]<<endl;
        if(s[i]=='5' && f1==0)
        {
            f1=1;
            five=1;
            fin=i;
        }
        else if(five==1 && (s[i]=='2' || s[i]=='7') && final<0)
        final=i;
        if(s[i]=='0' && f2==0){
        ze=i;
        f2=1;
       // cout<<ze<<endl;
        zero=1;}
        else if(zero==1 && (s[i]=='0' || s[i]=='5') && fi<0)
        {
            fi=i;
        }
      //  cout<<"ff"<<endl;
    }
   // cout<<ze<<" "<<fi<<endl;
 //  cout<<fin<<" "<<final<<endl;
    string a=s.substr(n-1,2);
    if(a=="00" || a=="25" || a=="50" || a=="75")
    cout<<"0"<<endl;
    else if(fi>=0 && final>=0)
    cout<<min(abs(fi-ze)-1+(n-ze),abs(final-fin)-1+(n-fin))<<endl;
    else if(fi>=0)
    cout<<abs(fi-ze)-1+(n-ze)<<endl;
    else
    cout<<abs(final-fin)-1+(n-fin)<<endl;
}
return 0;
}
