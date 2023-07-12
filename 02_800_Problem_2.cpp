#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ll t=1;
cin>>t;
while(t--)
{
    ll n; cin>>n;
    string s; cin>>s;
    set<char>st;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(!i){
            st.insert(s[i]);
             continue;
        }
        if(st.find(s[i])!=st.end() && s[i]!=s[i-1]){
            flag=1;
        }
        st.insert(s[i]);
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}