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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
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
    sort(arr,arr+n);
    int ne[n],sum=0;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]+arr[n-1-i]==1)
        {
            ne[i]=1;
            ne[n-1-i]=0;
        }
        else{
        int s=(arr[i]+arr[n-1-i])/2;
       cout<<s<<endl;
        if(s%2==0){
            ne[i]=s;
            ne[n-1-i]=s;
        }
        else{
        ne[i]=(arr[i]+arr[n-1-i])/2;
        ne[n-1-i]=(arr[i]+arr[n-1-i])-(ne[i]);
        }
        }
    }
    if(n%2!=0)
    ne[n/2]=arr[n/2];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=sum+abs(ne[i]-ne[j]);
        }
    }
   // array_print(n,ne);
    cout<<sum<<endl;
}
return 0;
}
