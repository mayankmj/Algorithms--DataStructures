#include <bits/stdc++.h>
#include <algorithm>
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
    int n,count=0,k=0,m=0;
    cin>>n;
    int arr[n],even[n],odd[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 /*   for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            swap(arr[i],arr[i--]);
        }*/
    }
int flag=0;
for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
          int temp=i;
           swap(arr[flag],arr[temp]);
           flag++;
        }
    }




   // sort(arr,arr+n,greater<int>());
  // int max=largest(arr,n);
   
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
        int x=__gcd(arr[i],2*arr[j]);
        if(x>1)
        count++;
        }
    }
   /* for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
        int x=__gcd(2*arr[i],arr[j]);
        if(x>1)
        count++;
        }
    }*/
    cout<<count<<endl;

}
return 0;
}
