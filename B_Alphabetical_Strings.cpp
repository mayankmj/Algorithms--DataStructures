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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    string s;
    int c=0,co=0;
    cin>>s;
    int lenght=s.size();
    for(int i=0;i<lenght;i++)
    {
        for(int j=i+1;j<lenght;j++)
        {
            if(s[i]==s[j])
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;i<lenght;i++)
        {
            if(s[i]>96 && s[i]<=(96+lenght))
            co++;
        }
        if(co!=lenght)
        cout<<"NO"<<endl;
        else
        {
            int index=0,p=1,q=1,ca=0;
            for(int i=0;i<lenght;i++)
            {
                if(s[i]==97){
                index=i;
                break;
                }
            }
            for(int i=0;i<lenght-1;i++)
            {
                if(s[index+p]==(98+i))
                {
                    p++;
                }
                else if(s[index-q]==(98+i))
                {
                    q++;
                }
                else{
                ca=1;
                break;
                }
            }
            if(ca==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
            
    }
}
return 0;
}
