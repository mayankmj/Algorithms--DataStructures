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
        ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    // if(n==1)
	    // {
	    //     if(s[0]=='W') 
	    //     cout<<"YES"<<endl;
	    //     else 
	    //     cout<<"NO"<<endl;
	    // }
	    // else if(n==2)
	    // {
	    //     if((s[0]=='W' || s[1]=='W') && (s[0]=='B' ||s[1]=='B' || s[0]=='R' || s[1]=='R')) cout<<"NO"<<endl;
	    //     else cout<<"YES"<<endl;
	    // }
	    // else if((s[1]=='W' && (s[0]=='B' || s[0]=='R')) || (s[n-2]=='W' && s[n-1]!='W'))
	    // cout<<"NO"<<endl;
        // else{
	    // else{
	    //     ll flag=0,sum=0,x=0,temp=-1,a=0,b=0;
        //     ll cnt=0;
        //     for(auto x:s)
        //     {
        //         if(x=='W')
        //         cnt++;
        //         else if(x=='R')
        //         a++;
        //         else b++;
        //     }
        //    // cout<<cnt<<endl;
        // if(cnt==(n))
        // cout<<"YES"<<endl;
        // else if(a==0 || b==0)
        // cout<<"NO"<<endl;
        // else{
	    // for(int i=0;i<n;i++)
	    // {
        //     if(s[i]=='W'){
        //         if(abs(sum)==i && sum!=0)
        //         flag=1;
        //     }
        //     if(s[i]=='W' && x==0)
        //     {
        //         if(temp!=-1)
        //         {
        //             if(abs(sum)==abs((i-temp-1)) && sum!=0)
        //             flag=1;
        //         }
        //         x=1;
        //         sum=0;
        //         temp=i;
        //     }
        //     else if(s[i]=='W' && x==1)
        //     {
        //         if(temp!=-1)
        //         {
        //             if(abs(sum)==abs((i-temp-1)) && sum!=0)
        //             flag=1;
        //         }
        //         x=0;
        //         sum=0;
        //         temp=i;
        //     }
        //    // cout<<temp<<" ";
        //     if(s[i]=='R')
        //     sum++;
        //     else if(s[i]=='B')
        //     sum--;
        //     if(flag!=0)
        //     break;
        //    // cout<<sum<<endl;
	        
	    // }
	    // if(flag==1)
	    // cout<<"NO"<<endl;
	    // else
	    // cout<<"YES"<<endl;
	    // }
        // }
        ll flag=0,a=0,b=0,t_a=0,t_b=0,cnt=0;
        for(auto x:s){
            {
                if(x=='W')
                cnt++;
                else if(x=='R')
                a++;
                else b++;
            }
        }
           // cout<<cnt<<endl;
        if(cnt==(n))
        cout<<"YES"<<endl;
        else{
            a=0,b=0;
        for(auto x:s)
        {
            if(x=='R'){
            a++;t_a++;}
            else if(x=='B'){
            b++;t_b++;}
            else
            {
                if(a==0 && b==0) continue;
                else if(a==0 || b==0)
                flag=1;
                else{
                a=0;b=0;
                }
            }
            if(flag==1)
            break;
        }
        if(b==0&&a==0){}
    else if(b==0||a==0){
                flag=1;
            }
            else {
                b=0;
                a=0;
            }
            if(flag==1 || t_a==0 || t_b==0 || (s[n-1]!='W' && s[n-2]=='W'))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        }
}
	return 0;
}
// void asquare()
// {
//     ll n;
//     cin>>n;
//     string s;
//     cin>>s;
//     ll b=0;
//     ll r=0;
//     fl(i,n){
//         if(s[i]=='R')r++;
//         else if(s[i]=='B')b++;
//         else {
//             if(b==0&&r==0)continue;
//             else if(b==0||r==0){
//                 pn return;
//             }
//             else {
//                 b=0;
//                 r=0;
//             }
//         }
//     }
//     if(b==0&&r==0){}
//     else if(b==0||r==0){
//                 pn return;
//             }
//             else {
//                 b=0;
//                 r=0;
//             }
//             py
// }