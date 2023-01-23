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
    string arr;
    cin>>n;
    cin>>arr;
    ll flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"0"<<endl;
    else
    {
        ll temp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            {
                temp=i;
                break;
            }
        }
        vector<int>zero;
        vector<int>one;
        for(int i=temp+1;i<n;i++)
        {
            if(arr[i]=='0')
            {
                zero.push_back(i+1);
            }
        }
        ll zs=zero.size();
        for(int i=temp;i<n;i++)
        {
            if(arr[i]=='1')
            {
                one.push_back(i+1);
            }
            if(zs==(one.size()))
            break;
        }
        vector<int>final;
        sort(zero.begin(),zero.end(),greater<int>());
        ll om=one.size();
        for(int i=0;i<min(zs,om);i++)
        {
            if(zero[i]>one[i])
            {
                ll temp=zero[i],te=one[i];
                final.push_back(temp);
                final.push_back(te);
            }
        }
        cout<<"1"<<endl;
        cout<<final.size()<<" ";
        sort(final.begin(),final.end());
        for(auto x:final)
        cout<<x<<" ";
        cout<<endl;
    }
}
return 0;
}
