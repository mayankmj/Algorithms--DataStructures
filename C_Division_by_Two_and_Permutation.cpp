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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        while(arr[i]>n)
        {
            arr[i]/=2;
        }
    }
  /*  sort(arr,arr+n);
    ll c=0,y=0;
    ll button=0;
    for(int m=0;m<n;m++)
    {
        ll temp=m+1;
        if(arr[m]==temp)
        c++;
        else
        break;
    }
   if(c==(n))
    cout<<"YES"<<endl;
    //else if(y==1)
  //  cout<<"NO"<<endl;
    else
    {
        ll j=0;
        ll flag=0,i=1;
        while(flag!=1)
        {
            c=0;
            while(arr[n-i]==(n-j)){
                 i++;j++;               
                 } 
            arr[n-i]=arr[n-i]/2;
            sort(arr,arr+n);
            if(i>=(n-1)){
            for(int x=0;x<n;x++)
            {
                if(arr[x]==(x+1))
                c++;
                else
                break;
            }
            }
            if(c==(n))
            {
                button=1;
                break;
            }
            else if(arr[n-i]<(n-j))
            {
                button=0;
                break;
            }
            else
            {
                 while(arr[n-i]==(n-j)){
                 i++;j++;               
                 } 
            }
            
        }
        if(button==1)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }*/
   // sort(arr,arr+n);
    map<int,int>mayank;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(mayank[arr[i]]==0)
        mayank[arr[i]]=1;
        else
        {
            while(arr[i]>0){
            arr[i]/=2;
            if(mayank[arr[i]]==0){
            mayank[arr[i]]=1;break;}
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mayank[i+1]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
return 0;
}