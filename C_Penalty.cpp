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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll c=0;
    for(int i=0;i<10;i++)
    {
        if(s[i]==s[i+1])
        c++;
        
    }
    if(c==(9))
    {
        if(s[0]=='?')
        cout<<"6"<<endl;
        else
        cout<<"10"<<endl;
    }
    else
    {
        vector<char>even,odd;
        for(int i=0;i<10;i++)
        {
            if(i%2==0)
            even.push_back(s[i]);
            else
            odd.push_back(s[i]);
        }
        ll even_winner=10,e=0,o=0;
        //even_winner
        for(int i=0;i<5;i++)
        {
            if(even[i]=='1' || even[i]=='?')
            e++;
            if((e-o)>(4-i+1)){
            even_winner=i*2+1;break;}
            if(odd[i]=='1')
            o++;
            if((e-o)>(4-i)){
            even_winner=i*2+2;break;}
        }
        e=0,o=0;
        ll odd_winner=10;
        //odd_winner
        for(int i=0;i<5;i++)
        {    
            if(even[i]=='1')
            e++;
            if((o-e)>(4-i) || (i==4 && o>e)){
            odd_winner=i*2+1;break;}
            if(odd[i]=='1' || odd[i]=='?')
            o++;
            if((o-e)>(4-i)){
                odd_winner=i*2+2;break;
            }
        }
        cout<<min(odd_winner,even_winner)<<endl;
    }
}
return 0;
}
