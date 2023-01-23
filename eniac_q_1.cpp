#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        string s,t; cin>>s;
        t="ENIAC";
        for(int i=0;i<5;i++)
        {
            if(s[i]=='0') { t[i]+=32; cout<<t[i];}
            else cout<<t[i];
        }
        cout<<endl;
    }
    return 0;
}