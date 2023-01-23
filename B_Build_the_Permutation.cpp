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
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>vec(n);
    if(abs(a-b)>1 || b>(ceil(n/2.0)-1) || a>(ceil(n/2.0)-1) && a!=b)
    cout<<"-1"<<endl;
    else
    {
        if(a>b)
        {
            if(b==0)
            {
                cout<<"1"<<" ";
                for(int i=n;i>1;i--)
                cout<<i<<" ";
                cout<<endl;
            }
            else{
            vector<ll>odd_a(a,0);
            vector<ll>even_b(b,0);
            ll temp_a=a,temp_b=b,last=n,first=1,z=0,x=0,y=0;
            while(temp_a--)
            {
                odd_a[z]=last;
                last--,z++;
            }
            z=0;
            while(temp_b--)
            {
                even_b[z]=first;
                first++,z++;
            }
            for(int i=1;i<2*a;i++)
            {
                if(i%2!=0){
                vec[i]=odd_a[x];x++;}
                else{
                vec[i]=even_b[y];y++;}
            }
            y--,x--;
            ll final_a=odd_a[x],final_b=even_b[y]+1;
            for(int i=2*a;i<n;i++)
            {
                vec[i]=final_a-1;
                final_a--;
            }
            vec[0]=final_b;
            for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
            cout<<endl;
        }
       }
       else if(a==b){
           if(a>(n/2)-1)cout<<"-1"<<endl;
           else{
           ll first=1,last=n;
           cout<<b+1<<" ";
           for(int i=1;i<=2*a;i++)
           {
               if(i%2!=0){
                   cout<<last<<" ";last--;
               }
               else{
                   cout<<first<<" ";first++;
               }
           }
           ll j=2;
           for(int i=2*a+1;i<n;i++){
               cout<<b+j<<" ";j++;}
           cout<<endl;
           }
       }
       else{
           ll first=1,last=n;
           vector<ll>vec(n,0);
           for(int i=1;i<2*b;i++)
           {
               if(i%2!=0){
                   vec[i]=first;first++;
               }
               else{
                   vec[i]=last;last--;
               }
           }
           for(int i=2*b;i<n;i++)
           {
               vec[i]=first;
               first++;
           }
           vec[0]=first;
           for(auto x:vec)
           cout<<x<<" ";
           cout<<endl;
       }
    }
}
return 0;
}
