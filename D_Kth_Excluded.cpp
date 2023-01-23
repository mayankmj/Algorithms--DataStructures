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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<" " 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int largest(int arr[], int n)
{
    int i;
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

int32_t main(){
fast
int n,q,c=0,k=0;
cin>>n>>q;
int arr[n],qu[q];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<q;i++)
{
    cin>>qu[i];
}
int a=largest(qu,q);
int b=largest(arr,n);
cout<<b<<a<<endl;
b=b+a;
int final[b];
cout<<b<<endl;
for(int i=1;i<=b;i++)
{
    c=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==i)
        {
            c=1;
           // break;
        }
    }
   // cout<<c<<endl;
    if(c==0)
    {
        final[k]=i;
        k++;nm mn bn n 
    }
}
array_print(k,qu);
for(int i=0;i<q;i++)
{
    int d=qu[i];
    cout<<final[d]<<endl;
}
return 0;
}
