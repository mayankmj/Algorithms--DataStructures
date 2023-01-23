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
    string lang,english;
    int l=0,eng=0;
    cin>>n;
    cin>>lang;
    cin>>english;
    int both=0,a=0,c=0;
      for(int i=0;i<n;i++){
         if(lang[i]=='1'&&english[i]=='1'){
             both++;
         }else if(lang[i]=='1'&&english[i]=='0'){
             a++;
         }else if(english[i]=='1'&&lang[i]=='0'){
             c++;
         }
     }
     if(a==c){
         int sum=both+a;
         int count=min(sum,n/2);
         cout<<count<<"\n";
     }else{
     int x=min(a,c);
         int sum = both+x;
         int count=min(sum,n/2);
         cout<<count<<"\n";
     }
 }
 return 0;
}
