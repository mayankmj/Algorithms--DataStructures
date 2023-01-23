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
    int n,k,c=0;
    string s;
    cin>>n>>k;
    cin>>s;
    int m=k;
    int x=s.size();
    if(x<(2*k+1) || (s[0]!=s[n-1] && k>0))
    cout<<"NO"<<endl;
    else
    {
        if(k==0)
        cout<<"YES"<<endl;
        else
        {
            int i=0;
            while(m--)
            {
                if(s[i]!=s[n-1-i])
                {
                    c=1;
                    break;
                }
                i++;

            }
        if(c==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    }
    
}
return 0;
}
