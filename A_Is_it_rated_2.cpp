#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    long long int t=10000000;
    while(t--)
    {
        fflush(stdin);
        string s;
        cin>>s;
        if(s.empty()){
        cout<<"YES"<<endl;
        break;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}