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
    int n,k;
    cin>>n>>k;
    int j=0;
    int arr[10000];
    int original=n;
    while(n>0)
    {
        arr[j]=n%10;
        n=n/10;
        j++;
    }
    while(k!=0)
    {
        sort(arr,arr+j);
            if(arr[0]==9)
            break;
            else
            {
                arr[0]=arr[0]+1;
                k--;
            }
    }
   int c=1;
    for(int i=0;i<j;i++)
    {
        c=c*arr[i];
    }
    cout<<c<<endl;
    }
return 0;
}
