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
    ll n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    vector<int>one_index,final;
    ll zero=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        if(zero==x)
        {
            zero=0;
            y++;
        }
    }
    ll sum=0,count=0;
    ll ptr1=0,ptr2=x-1,flag=0;
    for(int i=0;i<=(n-x);i++)
    {
        ll c=0;
        for(int j=ptr1;j<=ptr2;j++)
        {
            if(s[j]=='1')
            {
                c++;
            }
        }
        if(c==0)
        {
            ptr1=ptr1+x;
            ptr2=ptr2+x;
        }
        else if(c==1){
        flag=1;
        ptr1++;
        ptr2++;
        }
        else
        {
        ptr1++;
        ptr2++;

        }
    }
    if(flag==1)
    cout<<y+1<<endl;
    else
    cout<<y<<endl;
}
return 0;
}
