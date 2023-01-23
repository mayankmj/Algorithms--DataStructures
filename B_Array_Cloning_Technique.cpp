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
ll mostFrequent(ll arr[], ll n)
{
    // Insert all elements in hash.
    map<ll, ll> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    ll max_count = 1, res = -1,flag=0;
    for (auto i : hash) {
        if(flag==0)
        {
            flag=1;
            res=i.first;
            max_count=i.second;
        }
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
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
    ll arr[n];
    array_input(n,arr);
    ll a=mostFrequent(arr,n);
   // cout<<a<<endl;
    ll count=0;
    if(n==1)
    cout<<"0"<<endl;
    else{
        ll c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=a)
        count++;
        else
        c++;
    }
    if(count==0)
    cout<<"0"<<endl;
    else{
        if(c>count)
        cout<<count+1<<endl;
        else{
           ll z=1;
           //cout<<c;
           ll temp=count;
           count=count-c;
           while((count)>0)
           {
               z++;
               c*=2;
               count=count-c;       
           }
           cout<<temp+z<<endl;
        }
    }
    }
}
return 0;
}
