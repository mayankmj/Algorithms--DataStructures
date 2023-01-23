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
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0]-arr[n-1])<<endl;
for(int i=1;i<n-1;i++)
{
    
    cout<<min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]))<<" ";
    cout<<max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]))<<endl;
}
cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0])<<endl;
return 0;
}
