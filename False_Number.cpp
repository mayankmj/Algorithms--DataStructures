#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s2="1";
        if((s.compare(0, 1, s2)) == 0)
        {
            string s1="0";
            s.insert(1,"0",1);
            cout<<s<<endl;
        }
        else
        {
            string s1="1";
            s1.append(s);
            cout<<s1<<endl;
        }
    }
    return 0;
}
