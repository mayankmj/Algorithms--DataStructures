#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int sum=0,c=a;
        while((x+1)!=c){
        for(int i=a;i<=c;i++)
        {
            sum=sum+i+(b-1);
        }
        c++;
        }
        int d=b,sumation=0;
        //cout<<sum<<endl;
        while((y+1)!=d)
        {
            for(int j=b;j<=d;j++)
            {
               sumation=sumation+x+(j-1);
            }
            d++;
        }
        cout<<sumation+sum<<endl;
    }
}