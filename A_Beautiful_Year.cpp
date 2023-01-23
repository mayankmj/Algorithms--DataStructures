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
int n;
cin>>n;
n++;
int original=n,flag=0;
while(flag!=1)
{
    original=n;
    int digit=log10(original)+1;
    int arr[digit];
    int i=0,c=0;
    while(original>0)
    {
        arr[i]=original%10;
        original=original/10;
        i++;
       // cout<<original<<endl;
    }
    sort(arr,arr+digit);
    for(int i=0;i<digit;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
            break;
        }
    }
    if(c==0)
    flag=1;
    if(c!=0)
    n++;
   // cout<<n<<endl;
}
cout<<n<<endl;
return 0;
}
