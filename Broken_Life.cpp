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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl;
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
    ll n,m;
    cin>>n>>m;
    string s,a;
    cin>>s>>a;
    ll x=0,count=0,j=0;
    ll arr[m];
    for(int i=0;i<m;i++)
    {
        char c=a[i];
            size_t found=s.find(c);
            if (found != string::npos)
            {
                arr[j]=found;
                count++;
                j++;
            }
    }
    ll flag=0;
    for(int i=0;i<j;i++)
    {
       // cout<<arr[i]<<" ";
        if(arr[i+1]<arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && count==m)
    cout<<"-1"<<endl;
    else if(s[0]==a[0])
    cout<<"-1"<<endl;
    else
    {
        string b=a;
        char d;
        sort(b.begin(),b.end());
        if(b[0]!='a')
        {
            d='a';
        }
        else if(b[1]!='b') d='b';
        else if(b[2]!='c') d='c';
        else if(b[3]!='d') d='d';
        else if(b[4]!='e') d='e';
        ll q=0;
        reverse(a.begin(),a.end());
        if(n>m)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='?')
                cout<<d;
                else
                cout<<s[i];
            }
        cout<<endl;
        }
        else{
            b=a;
            ll q=0,start=0,end=m-2,button=0;
        for(int i=0;i<n;i++)
        {
            button=0;
            if(s[i]=='?')
            {
                while(button!=1){
                char z=b[q];
                size_t found=s.find(z);
                if (found == string::npos){
                    s[i]=b[q];
                    button=1;
                }
                flag++;
                if(flag%2!=0){
                    q=start;
                    start++;
                    }
                    else{
                    q=end;
                    end--;}
                }
               // flag++;
            }
        }
        cout<<s<<endl;
        }
    }
}
return 0;
}
