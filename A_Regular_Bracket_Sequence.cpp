#include <bits/stdc++.h>
using namespace std;
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
    string s;
    cin>>s;
    int x=s.size();
   /* int a=0,b=0,c=0,d=0,e=0;
    if(s[0]==s[x-1])
    cout<<"NO"<<endl;
    else{
        if((s[0]=='A' && s[x-1]=='C') || (s[0]=='C' && s[x-1]=='A'))
        {
            d=1;
        }
        else if((s[0]=='C' && s[x-1]=='B') || (s[0]=='B' && s[x-1]=='C'))
        {
            d=2;
        } 
        else
        {
            d=3;
        }
       // cout<<d<<endl;
        if(d==2 || d==3){
            c=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='A' || s[i]=='C')
            c++;
            else if(s[i]=='B')
            c--;
        }
      //  cout<<c<<endl;
        if(c==0)
        {
            e=1;
        }
        }
         if(d==1 || d==3){
               c=0;
            for(int i=0;i<x;i++){
            if(s[i]=='C' || s[i]=='B')
            c++;
            else if(s[i]=='A')
            c--;  
           }
         if(c==0)
        {
            e=1;
        }
        }
           if(d==1 || d==2){
               c=0;
            for(int i=0;i<x;i++){
            if(s[i]=='C' || s[i]=='B')
            c++;
            else if(s[i]=='A')
            c--;
           } 
        if(c==0)
        {
            e=1;
        } 
        }
        if(e==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }*/
    if(x%2!=0  || s[0]==')' || s[x-1]=='(')
    cout<<"NO"<<endl;
    /*else if(s[0]!=s[1] && x==2)
    cout<<"YES"<<endl;*/
    else
    {
        int sum=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='(')
            sum++;
            else if(s[i]==')')
            sum--;
            else
            {
                if(sum>0)
                sum--;
                else if(sum<0)
                sum++;
                else
                sum++;
            }
          //  cout<<sum<<endl;
        }
        if(sum==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
return 0;
}
