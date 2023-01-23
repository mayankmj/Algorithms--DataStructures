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
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
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
    ll ans=0;
    if(s[0]=='b')
    ans=25;
    else if(s[0]=='c')
    ans=50;
    else if(s[0]=='d')
    ans=75;
    else if(s[0]=='e')
    ans=100;
    else if(s[0]=='f')
    ans=125;
    else if(s[0]=='g')
    ans=150;
    else if(s[0]=='h')
    ans=175;
    else if(s[0]=='i')
    ans=200;
    else if(s[0]=='j')
    ans=225;
    else if(s[0]=='k')
    ans=250;
    else if(s[0]=='l')
    ans=275;
    else if(s[0]=='m')
    ans=300;
    else if(s[0]=='n')
    ans=325;
    else if(s[0]=='o')
    ans=350;
    else if(s[0]=='p')
    ans=375;
    else if(s[0]=='q')
    ans=400;
    else if(s[0]=='r')
    ans=425;
    else if(s[0]=='s')
    ans=450;
    else if(s[0]=='t')
    ans=475;
    else if(s[0]=='u')
    ans=500;
    else if(s[0]=='v')
    ans=525;
    else if(s[0]=='w')
    ans=550;
    else if(s[0]=='x')
    ans=575;
    else if(s[0]=='y')
    ans=600;
    else if(s[0]=='z')
    ans=625;
    ////////////////////////////////////
    //////////////////////////////////////
    ///////////////////////////////////////
    if(s[1]=='a')
    ans+=1;
    else if(s[1]=='b')
    ans+=2;
    else if(s[1]=='c')
    ans+=3;
    else if(s[1]=='d')
    ans+=4;
    else if(s[1]=='e')
    ans+=5;
    else if(s[1]=='f')
    ans+=6;
    else if(s[1]=='g')
    ans+=7;
    else if(s[1]=='h')
    ans+=8;
    else if(s[1]=='i')
    ans+=9;
    else if(s[1]=='j')
    ans+=10;
    else if(s[1]=='k')
    ans+=11;
    else if(s[1]=='l')
    ans+=12;
    else if(s[1]=='m')
    ans+=13;
    else if(s[1]=='n')
    ans+=14;
    else if(s[1]=='o')
    ans+=15;
    else if(s[1]=='p')
    ans+=16;
    else if(s[1]=='q')
    ans+=17;
    else if(s[1]=='r')
    ans+=18;
    else if(s[1]=='s')
    ans+=19;
    else if(s[1]=='t')
    ans+=20;
    else if(s[1]=='u')
    ans+=21;
    else if(s[1]=='v')
    ans+=22;
    else if(s[1]=='w')
    ans+=23;
    else if(s[1]=='x')
    ans+=24;
    else if(s[1]=='y')
    ans+=25;
    else if(s[1]=='z')
    ans+=26;
    if(s[1]>s[0])
    ans--;
    if(s[0]=='a')
    cout<<s[1]-97<<endl;
    else
    cout<<ans<<endl;
}
return 0;
}
