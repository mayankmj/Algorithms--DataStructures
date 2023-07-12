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
        if(n%2 == 0) cout<<n/2<<" "<<n/2<<endl;
        else if(n ==3) cout<<"2 1"<<endl;
        else {
            ll flag=0;
            // finding the smallest divisor
            for(int i=2;i*i<=(n);i++)
            {
                // cout<<i<<" ";
                if(n%i == 0){
                    cout<<n/i<<" "<<n-n/i<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag) cout<<n-1<<" 1"<<endl;
        }
    }
}

// a+b=n => x*a + a = n a(x+1)=n a=> n/(x+1);