#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    }
    int od=0;
    if(odd%2==0)
    od=odd/2;
    else
    od=odd/2+1;
    if(even==0 || odd==0)
    cout<<"0"<<endl;
    else if(odd>=even)
    {
        if(odd%2==0)
        cout<<min(od,even)<<endl;
        else
        cout<<even<<endl;
    }
    else
    {
        if(odd%2==0)
        cout<<od<<endl;
        else
        cout<<even<<endl;
    }
}
return 0;
}
