#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    array_input(n,arr);
    ll temp=0,sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            while(arr[i]%2==0)
            {
                c++;
                arr[i]/=2;
            }
        }
        sum=sum+arr[i];
    }
    sort(arr,arr+n,greater<int>());
    sum=sum-arr[0];
    temp=arr[0];
    while(c--)
    {
        temp=temp*2;
    }
    cout<<sum+temp<<endl;

}
return 0;
}