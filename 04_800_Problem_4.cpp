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
    if(n%2 == 0){
    for(int i=1;i<n;i+=2){
        cout<<i+1<<" "<<i<<" ";
    }
    cout<<endl;
    }
    else{
        for(int i=1;i<n-2;i+=2){
        cout<<i+1<<" "<<i<<" ";
     }
     cout<<n-1<<" "<<n<<" "<<n-2<<endl;
    }
}

}