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
    int even[100000],odd[100000],j=0,k=0;
    //cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even[k]=arr[i];
            k++;
        }
        else
        {
            odd[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<even[i]<<" ";
    }
    for(int i=0;i<j;i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
