#include <bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
// fast
ll t=1;
// cin>>t;
while(t--){
    string s; cin>>s;
    char start='N';
    ll ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'L'){
            ans++;
            ans=ans%4;
        }
        else ans =  (ans+3)%4;
    }
    if(!ans) cout<<"N";
    else if(ans == 1) cout<<"W";
    else if(ans == 2) cout<<"S";
    else cout<<"E";
    cout<<endl;
}
return 0;
}
