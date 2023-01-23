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
    if(n%11==0 || n>1099)
    cout<<"YES"<<endl;
    else
    {
        int digit=log10(n)+1;
        int num=0,c=0;
        while(n>10){
           digit=log10(n)+1;
           if(digit==4 && n>1110)
           num=1111;
           else if(digit==3 && n>110)
           num=111;
           else if(digit=2 && n>10)
           num=11;

        n=n-num;
       // cout<<n<<endl;
        if(n%11==0)
        c=1;
     }
     if(c==0)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
    }
}
return 0;
}
