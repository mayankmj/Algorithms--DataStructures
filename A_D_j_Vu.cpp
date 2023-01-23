#include <bits/stdc++.h>
#include <cstring>
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
    string s;
    cin>>s;
    int x=s.size(),c=0;

    if(x%2==0 && x>3)
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[x-i-1])
            {
                c++;
            }
        }
        if(c<floor(x/2) && x>3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int y=s.size()+1;
            for(int i=0;i<s.size();i++)
            {
                s.erase(y,x);
                s.insert(y,s);
                
            }
            cout<<"YES"<<endl<<s<<endl;
        }
    }
   
}
return 0;
}
