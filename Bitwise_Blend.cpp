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
#define vay_input(n,v) for(int i=0;i<n;i++) cin>>v[i] 
#define vay_output(n,v) for(int i=0;i<n;i++) cout<<v[i]<<endl
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
    vector<int>v;
    ll tep=0;
    for(int i=0;i<n;i++)
    {
        cin>>tep;
        v.push_back(tep);
    }
    ll even=0,odd,te=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            even++;
            te=i;
        }
        else
        {
            odd++;
            temp=i;
        }
    }
    if(even==n || (v[n-1]%2==0 && v[n-2]%2==0))
    cout<<"-1"<<endl;
    else if(odd==n)
    {
        cout<<n/2;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            cout<<i<<" ";
        }
        else
        {
            for(int i=1;i<n;i++)
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(n==2)
    {
        if(v[0]%2!=v[1]%2)
        cout<<"0"<<endl;
        else
        {
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"2"<<endl;
        }
    }
    else
    {
        vector<int>vec;
        ll op=0;
        for(ll i=0;i<n-1;i++)
        {
            ll first=v[i]%2;
            ll second=v[i+1]%2;
            if(first==second)
            {
                if(first%2==0)
                {
                    if((i+2)<n)
                    {
                        if(v[i+2]%2==0)
                        {
                             v[i+1]=3;
                            vec.push_back(i+1);
                             vec.push_back(temp);
                        }
                        else
                        {
                         v[i+1]=4;
                         vec.push_back(i);
                         vec.push_back(temp);
                        }
                    }
                   // else{
                    //v[i+1]=3;
                    //vec.push_back(i+1);
                    //vec.push_back(temp);
   //                 }
                }
                else
                {
                    if((i+2)<n)
                    {
                         if(v[i+2]%2==0)
                        {
                             v[i+1]=3;
                            vec.push_back(i);
                             vec.push_back(i+1);
                        }
                        else
                        {
                         v[i+1]=2;
                         vec.push_back(i+1);
                         vec.push_back(i);
                        }

                    }
                    else{
                    v[i+1]=2;
                    vec.push_back(i+1);
                    vec.push_back(i);
                    }
                }
                op++;
            }
        }
        cout<<op<<endl;
        ll size=vec.size();
        for(int i=0;i<size;i=i+2)
        {
            cout<<vec[i]+1<<" "<<vec[i+1]+1<<endl;
        }
    }
}
return 0;
}
