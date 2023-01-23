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
    if(n<=6)
    cout<<"15"<<endl;
    else if(n<=8)
    cout<<"20"<<endl;
    else if(n==9 || n==10)
    cout<<"25"<<endl;
    else if(n%6==0 || n<=12){
        int ans=0;
    if(n%6!=0)
    ans=15;
    cout<<15*(n/6)+ans<<endl;
    }
    else if(n<=40){
    int ans=0;
    if(n%8!=0)
    ans=20;
    cout<<20*(n/8)+15<<endl;
    }
    else if(n%10==0)
    {
        int ans=(n/10)*25;
        cout<<ans<<endl;
    }
    else
    {
        int rem=n%10;
        if(rem<=6)
        {
            int ans=(n/10)*25+15;
            cout<<ans<<endl;
        }
        else if(rem<=8)
        {
            int ans=(n/10)*25+20;
            cout<<ans<<endl;
        }
        else
        {
            int ans=(n/10)*25+25;
            cout<<ans<<endl;
        }
    }
}
return 0;
}