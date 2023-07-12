#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n; cin>>n;
    string s; cin>>s;
    if(n == 2){
        if(s[0] == s[1]) cout<<"2"<<endl;
        else cout<<"0"<<endl;
    }
    else if(n%2 == 0){
        ll ans=0,j=1;
        for(int i=n/2;i<n;i++)
        {
            if(s[i] == s[n/2-j]){
                ans=(i+1) - (n/2-j);
            }
            j++;
        }
        cout<<ans<<endl;
    }
    else{
        ll ans=1,j=1;
        for(int i=n/2+1;i<n;i++)
        {
            if(s[i] == s[n/2-j]){
                ans = i - (n/2-j) +1;
            }
            j++;
        }
        cout<<ans<<endl;
    }

}    
}