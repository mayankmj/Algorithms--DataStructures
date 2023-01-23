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
    ll temp=0,flag=0;
    ll is_equal=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i+1]>s[i])
        {
            flag=1;
            temp=i;
            break;
        }
        else if(s[i+1]==s[i])
        is_equal++;
    }
   // cout<<temp<<flag<<endl;
   if(s[0]==s[1])
   cout<<s[0]<<s[1]<<endl;
    else if(is_equal==(n-1) || (flag==1 && temp==0))
    cout<<s[0]<<s[0]<<endl;
  //  else if(temp==0 && flag==1)
    ///{
       // cout<<s;
        //r//everse(s.begin(),s.end());
        //cout<<s<<endl;
    //}
    else if(flag==0)
    {
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    else{
     //   cout<<s.substr(0,temp+1);
        string a=s.substr(0,temp+1);
        cout<<a;
        reverse(a.begin(),a.end());
        cout<<a<<endl;
    //reverse(s.begin(),(s.begin()+temp+1));
   // cout<<s.substr(0,temp+1)<<endl;
    }
}
return 0;
}
