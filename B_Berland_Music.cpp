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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<pair<int,int>> v;
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(make_pair(temp,i));
    }
    string s;
    cin>>s;
    vector<pair<int,int>> v_even;
    vector<pair<int,int>> v_odd;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            v_even.push_back(make_pair(v[i].first,v[i].second));
        }
        else
        v_odd.push_back(make_pair(v[i].first,v[i].second));
    }
    sort(v_even.begin(),v_even.end());
    sort(v_odd.begin(),v_odd.end());
    vector<pair<int,int>> final;
     temp=1;
    for(auto x:v_even)
    {
        //ll a=v_even
        final.push_back(make_pair(temp,x.second));
        temp++;
    }
    for(auto x:v_odd)
    {
        final.push_back(make_pair(temp,x.second));
        temp++;
    }
     sort(final.begin(), final.end(), sortbysec);
     for(auto x:final)
     {
         cout<<x.first<<" ";
     }
     cout<<endl;
}
return 0;
}
