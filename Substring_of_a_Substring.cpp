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


ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; // result
 
    for (int i = 0; i < n; i++) {
         
        // Note : Default values in visited are false
        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {
 
            // If current character is visited
            // Break the loop
            if (visited[str[j]] == true)
                break;
 
            // Else update the result if
            // this window is larger, and mark
            // current character as visited.
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
 
        // Remove the first character of previous
        // window
        visited[str[i]] = false;
    }
    return res;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll n=s.size();
    ll count=0,maxi=0;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]!=s[0] && s[i]!=s[n-1])
        count++;
        else 
        count=0;
        maxi=max(count,maxi);
    }
    if(maxi==0)
    cout<<"-1"<<endl;
    else
    cout<<maxi<<endl;
}
return 0;
}
