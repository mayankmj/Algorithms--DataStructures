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
#define MAX 1000000

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
ll countPairsWithDiffK(vector<ll>arr, ll n, ll k)
{
    int count = 0;
    sort(arr.begin(),arr.end()); // Sort array elements
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else // arr[r] - arr[l] < sum
              r++;
    }  
    return count;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>vec;
    ll flag=0;
   // vector<int>::iterator lower, upper;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    ll z=0;
    ll lower = lower_bound(vec.begin(), vec.end(), k)-vec.begin();
    ll sum=0;
    ll x=countPairsWithDiffK(vec,n,k);
    if(x>0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  /*  else{
    for(int i=0;i<n;i++)
    {
        ll temp=vec[i]-sum;
        for(int j=lower;j<n;j++)
       {
            vec[j]-=temp;
            if(vec[j]==k)
            {
                flag=1;
                break;
            }
        }
      //  cout<<lower<<endl;
        if(flag==1)
        {
            //cout<<vec[max(lower-1,z)];
            flag=1;
            break;
        }
        sum+=temp;
    }
    if(flag==0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl; 
}*/
}
return 0;
}
