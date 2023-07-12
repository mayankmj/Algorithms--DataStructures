#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t = 1;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
    {
      cin >> vec[i];
    }
    ll start=0,end=0;
    for(int i=0;i<n-1;i++)
    {
      if(vec[i] == vec[i+1]){
        if(!start) start=i+1;
        else end=i;
      }
    }
    if(!end) cout<<"0"<<endl;
    else if(start == end) cout<<"1"<<endl;
    else cout<<end-start<<endl;
  }
  return 0;
}