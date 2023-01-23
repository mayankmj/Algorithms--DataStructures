#include <bits/stdc++.h>
using namespace std;
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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
const int N=1e5+1;
int main(){
    int t;
    cin>>t;
    int mayank[N];
    mayank[1]=1;
    mayank[2]=0;
    for(int i=3;i<N;i++){
        mayank[i]=min(mayank[i-1],mayank[i-2])^1;
    }
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char y='2';
        int c=0;
        for(auto i:s){
            if(i!=y){
                y=i;
                c++;
            }
        }
        if(mayank[c]==1){
            cout<<"SAHID"<<endl;
        }
        else{
            cout<<"RAMADHIR"<<endl;
        }
    }
    return 0;
}