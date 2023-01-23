#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n,sum=0,k;
    cin>>n>>k;
    int num=n;
    while(n>0)
    {
        sum=sum+n*100*k;
        n--;
    }
    int sumation=0;
    while(k>0)
    {
      sumation=sumation+k*num;
      //cout<<sumation<<endl;
      k--;
    }
    cout<<sumation+sum<<endl;
}