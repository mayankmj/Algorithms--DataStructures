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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
  
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t=1;
cin>>t;
int counter=1;
while(t--){
    string s,f;
    cin>>s>>f;
    int l=s.size();
    int le=f.size();
    int arr[le],final[l];
    int k=0,m=0,sum=0;
    for(int i=0;i<s.size();i++)
    {
        k=0;
        for(int j=0;j<f.size();j++)
        {
            int mini=min(s[i],f[j]);
            int maxi=max(s[i],f[j]);
            int temp=mini+26;
            int a=maxi-mini;
            int b=maxi-temp;
            if(a<0)
            a=-a;
            if(b<0)
            b=-b;
            int g=min(a,b);
            arr[k]=g;
            k++;
        }
       // for(int x=0;x<k;x++)
        //cout<<arr[x]<<" "<<endl;
        final[m]=*min_element(arr,arr + k);
        m++;
        k=0;
    }
    for(int i=0;i<m;i++)
    {
       // cout<<final[i]<<" "<<endl;
        sum=sum+final[i];
    }
    cout<<"Case #"<<counter<<":"<<" "<<sum<<endl;
    counter++;
}
return 0;
}
