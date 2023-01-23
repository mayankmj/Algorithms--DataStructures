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
    int a,b;
    cin>>a>>b;
    if(a==b && a==1 && b==1)
    {
        cout<<"2"<<endl;
    }
    else if(a%2==0 && b%2==0)
    cout<<"0"<<endl;
    else if(a%2!=0 && b%2!=0)
    {
        int x=__gcd(a,b);
        int oa=a++;
        int ob=b++;
         int z=__gcd(oa,b);
        int y=__gcd(a,ob); 
         if(x>1)
        cout<<"0"<<endl;
        else if(y>1 || z>1)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
    else
    {
        int x=__gcd(a,b);
        if(x>1)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
}
return 0;
}
