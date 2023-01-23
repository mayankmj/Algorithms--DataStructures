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
    int n,k,distance=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[k];
    for(int i=0;i<k;i++){
    cin>>arr[i];
    }
    for(int j=0;j<k;j++){
     //   cout<<s<<endl;
       // distance=0;
       if(j==0){
       for(int i=0;i<s.size()-1;i++)
       {
         if(s[i]==s[i+1])
           distance=distance+2;
         else
          distance++;
       }
       }
     //  cout<<distance<<endl;
      int num=arr[j];
      if(num<s.size()){
      if(s[num-1]==s[num]){
          distance--;
        // cout<<"distance"<<endl;
      }
      }
      if(num>1){
      if(s[num-1]==s[num-2]){
          distance--;
          //cout<<"nnbm";
      }
      }
      if(num<s.size()){
      if(s[num-1]!=s[num])
      distance++;
      }
      if(num>1){
      if(s[num-1]!=s[num-2])
      distance++;}
      if(s[num-1]=='0')
      s[num-1]='1';
      else
      s[num-1]='0';
      cout<<distance<<endl;
     }
  }
  return 0;
}

    
   
