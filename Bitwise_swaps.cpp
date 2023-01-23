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
bool check_sq(ll n)
{
    while(n>2)
    {
        n=n/2;
        if(n%2!=0)
        return false;
    }
    return true;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<int> vec;
    vector<pair<int,int>>ori;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        ori.push_back(make_pair(vec[i],i));
    }
    sort(ori.begin(),ori.end());
    ll flag=0;
  /*  for(auto x:vec)
    cout<<x<<" ";
    cout<<"-----";
    for(auto x:ori)
    cout<<x.first<<" "<<x.second<<endl;*/
    for(int i=0;i<n-1;i++)
    {
        if((vec[i]&ori[i].first)!=0)
        {
            ll index=ori[i].second;
           // cout<<index;
            swap(vec[i],vec[index]);
          //  cout<<vec[i]<<" "<<vec[index]<<endl;
        }
        else{
            cout<<vec[i]<<" "<<ori[i].first<<endl;
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"No"<<endl;
    else
    cout<<"YES"<<endl;

}
return 0;
}
