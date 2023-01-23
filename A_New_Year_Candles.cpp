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


int32_t main(){
fast
int a,b;
cin>>a>>b;
int sum=a,extra=0;
while(a>=b)
{
    if(a%b!=0){
    extra=extra+a%b;
   // a=a-a%b;
    }
    sum=sum+a/b;
    a=a/b;
}
extra=extra+a;
ll e=0;
while(extra>=b)
{
    if(extra%b!=0)
    e=e+extra%b;
    sum=sum+extra/b;
    extra=extra/b;
}
//
e=e+extra;
sum=sum+e/b;
sum=sum+extra/b;
cout<<sum<<endl;
return 0;
}
/////
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a,b;
    cin>>a>>b;
    if(b>a){
    cout<<a<<endl;
    return;
    }
    int num=a,den=1;
    int ans=0;
    int rem=0;
    while(den<=num){
       rem+=num%den;
        ans+=(num/den)+(rem/b);
        if(rem>=b){
            rem=0;
        }
        den*=b;
    }
    int mans=ans;
    cout<<mans<<endl;
}
int main(){
solve();
return 0;
}*/