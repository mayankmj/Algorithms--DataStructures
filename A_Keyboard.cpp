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
string a="qwertyuiop";
string b="asdfghjkl;";
string c="zxcvbnm,./";
string d;
cin>>d;
if(d=="R")
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        ll flag=0;
        for(int j=0;j<c.size();j++)
        {
            if(s[i]==c[j] && j==0)
            {
                cout<<"l";
                flag=1;
                break;
            }
            else if(s[i]==c[j])
            {
                cout<<c[j-1];
                flag=1;
                break;
            }
            else if(s[i]==b[j] && j==0)
            {
                cout<<"p";
                flag=1;
                break;
            }
            else if(s[i]==b[j])
            {
                cout<<b[j-1];
                flag=1;
                break;
            }
            else if(s[i]==a[j] && j==0)
            {
                cout<<"a";
                flag=1;
                break;
            }
            else if(s[i]==a[j])
            {
                cout<<a[j-1];
                flag=1;
                break;
            }
        }
        
    }
}
else
{
    string s;
    cin>>s;
    ll flag=0;
    ll n=c.size();
    for(int i=0;i<s.size();i++)
    {
        ll flag=0;
        for(int j=0;j<c.size();j++)
        {
            if(s[i]==c[j] && j==(n-1))
            {
                cout<<"q";
                flag=1;
                break;
            }
            else if(s[i]==c[j])
            {
                cout<<c[j+1];
                flag=1;
                break;
            }
            else if(s[i]==b[j] && j==(n-1))
            {
                cout<<"z";
                flag=1;
                break;
            }
            else if(s[i]==b[j])
            {
                cout<<b[j+1];
                flag=1;
                break;
            }
            else if(s[i]==a[j] && j==(n-1))
            {
                cout<<"";
                flag=1;
                break;
            }
            else if(s[i]==a[j])
            {
                cout<<a[j+1];
                flag=1;
                break;
            }
        }
    }
}
return 0;
}
