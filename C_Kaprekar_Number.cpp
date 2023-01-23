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
int n,k;
cin>>n>>k;
int a=1;
while(k-- || n!=0)
{
    int digit=log10(n)+1,original=n;
    int arr[digit],i=0,number=0,b=0,c=0;
    while(n>0)
    {
        if(n%10!=0){
        arr[i]=n%10;
        }
        i++;
        n=n/10;
    }
    array_print(digit,arr);
    sort(arr,arr+digit);
    n=original;
    for(int i=0;i<digit;i++)
    {
        b=b*i+arr[i];
        c=c*(digit-i)+arr[i];
    }
    cout<<b<<c<<endl;
    n=c-b;
    if(n<0)
    n=0;
}
//cout<<n<<endl;
return 0;
}
