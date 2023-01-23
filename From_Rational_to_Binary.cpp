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
#define MAXN   100001
int spf[MAXN];
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    fast 
    int a=1,b=1,c=0;
    scanf("%lld,%lld",&a,&b);
    int num=b;
    while(b%2==0)
    {
        b=b/2;
        if(b==1)
        c=1;
    }
    b=num;
    while(b%5==0)
    {
        b=b/5;
        if(b==1)
        c=1;
    }
    if(c==1)
    printf("YES\n");
    else
    printf("No\n");
}
return 0;
}
