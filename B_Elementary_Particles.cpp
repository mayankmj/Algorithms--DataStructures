#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
//#define mp make_pair
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
    ll n,c=0;
    cin>>n;
    ll arr[n];
    vector<int> v;
    ll temp=1;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    map<int,vector<int>>mp;
  //  map<int,int>mayank;
   // for(int i=0;i<n;i++)
  //  {
   //     mayank[v[i]]++;
     //   cout<<"f";
  ///  }
    temp = 1;
    for(int i = 0;i<n;i++){
        mp[v[i]].push_back(temp);
        temp++;
    }
  //  for(int i=0;i<n;i++)
  //  {
  //      if(v[0]==v[i])
  //      c++;
   // }
   // if(c==n)
   // cout<<(n-1)<<endl;
  //  else 
   // {
       // ll flag=0;
      //  for(auto x: mayank)
      //  {
      //      if(x.second>1)
      //      {
      //          flag=1;
      //          break;
      //      }
      //  }
      //  if(flag==0)
     //   cout<<"-1"<<endl;
     //   else
      //  {
            ll max=INT_MAX;
            for(int i=0;i<mp.size();i++)
            {
                if(mp[i].size()>1)
                {
                    for(int j=0;j<mp[i].size()-1;j++)
                    {
                        ll a=mp[i][j+1]-mp[i][j];
                        if(a<max)
                        {
                            max=a;
                        }
                    }
                }
            }
            if(max==INT_MAX)
            cout<<"-1"<<endl;
            else
            cout<<n-max<<endl;
     //   }
  //  }
}
return 0;
}
