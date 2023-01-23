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
#define maximum 3E5+5
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
    int n,m;
    cin>>n>>m;
    int city[n],travelers[m];
    for(int i=0;i<n;i++)
    {
        cin>>city[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>travelers[i];
    }
    int i,j;
    int maxi=maximum;
    int temp[n];
    int low=-1,high=-1;
    for(i=0;i<n;i++){
       if(i==0){
        temp[i]=0;
       }
       else if(city[i]!=0){
        temp[i]=0;
       }
       else{
        temp[i]=maxi;   
       } 
   }
   for(i=0;i<n;i++){
       if(city[i]==1){
           high=i;
       }
       if(high!=-1){
           if(city[i]==0){
            temp[i]=min(temp[i],i-high);
           }
       }
   }
    for(i=n-1;i>=0;i--){
        if(city[i]==2){
            low=i;  
        }
        if(low!=-1){
            if(city[i]==0){ 
                temp[i] =min(temp[i],low-i);
            }
        }
    }
    for(i=0;i<m;i++){
        j=travelers[i]-1;
        if(temp[j]!=maxi){
            cout<<temp[j]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
   cout<<endl;
}
return 0;
}
