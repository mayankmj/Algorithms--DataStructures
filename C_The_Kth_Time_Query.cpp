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
ll RepititionSearch(vector<int>data,ll N,ll element ) {    

    if (N >= data.size() ) {
        return -1;
    }

    ll counter = 0;
    ll i = 0;
  //  cout<<"grf"<<endl;
    for (auto e : data ) {
        if (element == e ) {
            ++counter;
            i++;
        } else {
            i++;
        }

        if ( counter == N ) {
            return i - 1;
        }
    }
    return -1;
}
int main(){
fast
ll n,q;
cin>>n>>q;
vector<int>data;
//map<int,int>mayank;
for(int i=0;i<n;i++)
cin>>data[i];
/*for(int i=0;i<n;i++)
{
    mayank[v[i]]++;
}*/
for(int i=0;i<q;i++)
{
    ll temp,index;
    cin>>temp>>index;
    cout<<RepititionSearch(data,index,temp)<<endl;;
    /*ll x=mayank[temp];
    if(x<index)
    cout<<"-1"<<endl;
    else
    {
        ll f=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==temp)
            {
                f++;
            }
            if(f==index)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }*/
}
return 0;
}
