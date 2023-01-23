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



string removeDuplicate(string str, int n)
{
   // Used as index in the modified string
   int index = 0;  
    
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it 
     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
int32_t main(){
fast
int n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
s[i]=towlower(s[i]);
sort(s.begin(),s.end());
s=removeDuplicate(s,n);
//cout<<s<<endl;
int flag=0;
//cout<<s<<endl;
int c=0;

for(int i=0;i<26;i++)
{
        for(int j=0;j<26;j++)
        {
           // cout<<char(97+i)<<endl;
            if(s[j]==char(97+i) || s[j]==char(65+i))
            {
                c=1;
               // cout<<s[j]<<endl;
                break;
            }
        }
        if(c==0){
         cout<<"NO"<<endl;
        // cout<<s[i]<<endl;
         flag=1;
         break;
        }
        c=0;
}
if(flag==0)
cout<<"YES"<<endl;
return 0;
}
