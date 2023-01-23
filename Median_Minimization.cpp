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


int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    array_input(n,arr);
    ll odd[n],even[n],j=0,k=0;
    sort(arr,arr+n);
    if(n==3)
    {
        cout<<abs(arr[1]-arr[0])<<endl;
    }
    else{
        cout<<abs(arr[n/2]-arr[n/2-1])<<endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
        even[j]=arr[i];
        j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    ll odd_index=(k)/2;
    ll eve_index=(j+1)/2;
  //  cout<<odd_index<<" "<<eve_index<<endl;
    ll eve=even[eve_index-1];
    ll od=odd[odd_index-1];
  //  cout<<eve<<" "<<od<<endl;
    ll diff=abs(od-eve);
   // cout<<diff<<endl;
    }
}
return 0;
}
