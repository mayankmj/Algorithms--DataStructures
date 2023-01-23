#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            c=0,d=0;
            for(int i=0;i<s.size();i++)
            {
               // cout<<"JNJFD";
                if(s[i]>'m' || s[i]<'N'){
                c=1;
                d=1;
                //cout<<"njdfnsdf";
                break;}
                else if(s.at(i)>='a' && s.at(i)<='m')
                c=1;
                else if(s.at(i)>='N' && s.at(i)<='Z')
                d=1;
            }
            if(c==1 && d==1)
            break;
        }
        if(c==1 && d==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}