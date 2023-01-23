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
    ll n,k,sum=0;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        string a=s.substr(i,2);
       // cout<<a<<" ";
        ll temp=stoi(a);
        //cout<<temp<<" ";
        sum+=temp;
       // cout<<sum<<" ";
        a="0";
    }
    //cout<<sum<<endl;
    // ll last_one=0;
    // for(int i=n-2;i>=1;i--)
    // {
    //     if(s[i]=='1'){
    //     last_one=i; break;}
    // }
    // ll flag=0,index=-1,end;
    // if(s[n-1]=='0' && (n-last_one-1)<=k){
    // for(int i=n-2;i>=0;i--){
    //     if(k==0) break;
    //     if(s[i]=='1'){
    //     flag=1;
    //     index=i;
    //     }
    //     k--;
    //     if(flag==1) break;
    // }
    // if(flag==1 && s[n-1]=='0'){
    //     sum=sum-10;
    // }
    // }
    // flag=0;
    // if(k>0 && s[0]=='0'){
    //     if(index==-1)  end=n-2;
    //     else end=index;
    //     for(int i=1;i<end;i++){
    //         if(k==0) break;
    //         if(s[i]=='1' && k>=i) flag=1;
    //         if(k==0 || flag==1) break;
    //         k--;
    //     }
    //     if(flag==1 && s[0]=='0')
    //     sum--;
    // }
    // cout<<sum<<endl;
    ll first_one=0,last_one=0;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]=='1')
        {
            first_one=i;
            break;
        }
    }
    for(int i=n-2;i>=1;i--)
    {
        if(s[i]=='1')
        {
            last_one=i;
            break;
        }
    }
    if(last_one==first_one){
        if(s[n-1]=='0')
        {
            if((n-last_one-1)<=k)
            sum-=10;
        }
    }

}
return 0;
}
