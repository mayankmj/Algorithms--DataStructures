#include <bits/stdc++.h>
#include <stdio.h>
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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int x,n;
   // scanf("%d%d",&x,&n);
   cin>>x>>n;
   if(n==0)
   cout<<x<<endl;
   else 
   {
       if(n%4==0)
       cout<<x<<endl;
       else
       {
           if(x%2==0){
           int temp=n/4;
           int c=n%4;
           int sign=1,signi=-1,sum=x;
           for(int i=temp*4+1;i<=n;i++)
           {
               if(i%2==0)
               {
                   sum=sum+i*sign;
                   if(sign==1)
                   sign=-1;
                   else
                   sign=1;
               }
               else
               {
                   sum=sum+i*signi;
                   if(signi==1)
                   signi=-1;
                   else
                   signi=1;
               }
           }
           cout<<sum<<endl;
           }
           else
           {
           int temp=n/4;
           int c=n%4;
           int sign=1,signi=-1,sum=x;
           for(int i=temp*4+1;i<=n;i++)
           {
               if(i%2==0)
               {
                   sum=sum+i*signi;
                   if(signi==1)
                   signi=-1;
                   else
                   signi=1;
               }
               else
               {
                   sum=sum+i*sign;
                   if(sign==1)
                   sign=-1;
                   else
                   sign=1;
               }
           }
           cout<<sum<<endl;
           }
   }

       }
       
}
return 0;
}
//10000000000 987654321
//-433494437 87178291199