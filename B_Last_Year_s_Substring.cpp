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
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)--'2')
        {
            if(s.at(i+1)=='0')
            {
                if(s.at(i+2)=='2')
                {
                    
                }
                
            }
            else
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s.at(j)=='0' && s.at(j+1)=='2' && s.at(j+2)=='0' && (n-j)==3)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        break;
    }
}
return 0;
}
