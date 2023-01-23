#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int days,d,a,b,c,count;
        cin>>days>>d>>a>>b>>c;
        count=days*d;
        if(count<10)
        cout<<"0"<<endl;
        else if(count>=42)
        cout<<c<<endl;
        else if(count>=21)
        cout<<b<<endl;
        else
        cout<<a<<endl;
    }
    return 0;
}