#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b==1)
        cout<<"NO"<<endl;
        else if(a!=b && b!=1){
        cout<<"YES"<<endl;
        cout<< a*b<<" ";
        cout<<a<<" ";
        cout<<a*b+a<<endl;}
        else
        {
            cout<<"YES"<<endl;
        cout<< a*b<<" ";
        cout<<23*a<<" ";
        cout<<23*a+a*b<<endl;}
    }
    return 0;
}