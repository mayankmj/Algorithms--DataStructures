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
    vector<ll int>vec;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    }
    vector<ll int>dup;
   // dup=vec;
    for(int i=0;i<n;i++)
    dup.push_back(vec[i]);
    sort(dup.begin(),dup.end());
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]!=dup[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Yes"<<endl;
    else
    {
        flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(vec[i]>vec[i+1])
            {
                if(vec[i]%2==vec[i+1]%2)
                flag=1;
            }
            if(flag==1)
            break;
        }  
        if(flag==1)
        cout<<"No"<<endl;
        else
        {
            flag=0;
            ll ev=0,od=0;
            vector<ll int>even,odd;
            for(int i=0;i<n;i++)
            {
                if(vec[i]%2==0){ev++;
                even.push_back(vec[i]);}
                else{od++;
                odd.push_back(vec[i]);}
            }
            for(int i=0;i<ev-1;i++)
            {
                if(even[i]>even[i+1]){
                flag=1;
                break;}
            }
            for(int i=0;i<od-1;i++)
            {
                if(odd[i]>odd[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
    }
}
return 0;
}
