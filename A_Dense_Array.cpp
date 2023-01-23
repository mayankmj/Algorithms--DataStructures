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

int highestPowerof2(unsigned int n)
{
    // Invalid input
    if (n < 1)
        return 0;
 
    int res = 1;
 
    // Try all powers starting from 2^1
    for (int i=0; i<8*sizeof(unsigned int); i++)
    {
        int curr = 1 << i;
 
        // If current power is more than n, break
        if (curr > n)
           break;
 
        res = curr;
    }
 
    return res;
}
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
    vector<int>vec(n);
    for(int &x:vec)
    cin>>x;
    ll sum=0;
    ll c=0;
    for(int i=0;i<(n-1);i++)
    {
        int x=1;
        float a=max(vec[i+1],vec[i]);
        float b=min(vec[i],vec[i+1]);
        ll temp=ceil(a/b);
        if(temp>2)
        {
            if(vec[i+1]>vec[i])
            {
              //  cout<<"#"<<" ";
                x=vec[i];
                while(temp>2)
                {
                    x=x*2;
                    a=max(vec[i+1],x);
                    b=min(x,vec[i+1]);
                    temp=ceil(a/b);
                    c++;
                //   cout<<temp<<c<<" ";
                }
            }
            else
            {
                x=vec[i+1];
              //  cout<<">"<<" ";
                while(temp>2)
                {
                    x=x*2;
                    a=max(x,vec[i]);
                    b=min(vec[i],x);
                    temp=ceil(a/b);
                    c++;
                   // cout<<temp<<" ";
                }
            }
           // cout<<endl;
        }
    }
    cout<<c<<endl;
}
return 0;
}
