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
    string s;
    cin>>s;
    int flag=0;
    if(s.size()<=3)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            flag=1;
        }
    }
    else{
            for(int j=0;j<s.size()-2;j++)
            {
                if(s[j]=='1')
                {
                    s[j]='0';
                    if(s[j+1]=='0')
                    s[j+1]='1';
                    else
                    s[j+1]='0';
                    if(s[j+2]=='0')
                    s[j+2]='1';
                    else
                    s[j+2]='0';
                }
              //  cout<<j<<" "<<s<<endl;
            }
           // cout<<s<<" "<<endl;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    flag=1;
                    break;
                }
            }
    }
          //  cout<<s<<endl;
            if(flag==1)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
}
return 0;
}
