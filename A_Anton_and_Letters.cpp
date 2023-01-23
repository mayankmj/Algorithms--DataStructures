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
string s;
getline(cin,s);
//cout<<s<<endl;
int c=0,comma=0;
sort(s.begin(),s.end());
//cout<<s<<endl;
for(int i=0;i<s.size();i++)
{
    if(s[i]!=s[i+1])
    c++;
    if(s[i]==',')
    comma++;
}
if(c<3)
cout<<"0"<<endl;
else if(c==3 && comma==0)
cout<<"1"<<endl;
else if(c==5 && comma==1)
cout<<"2"<<endl;
else
cout<<c-4<<endl;
return 0;
}
