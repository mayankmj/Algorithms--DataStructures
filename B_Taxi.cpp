// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==4)
        four++;
        else if(arr[i]==3)
        three++;
        else if(arr[i]==2)
        two++;
        else
        one++;
    }
    int three_one=min(three,one);
    one=one-three_one;
    three=three-three_one;
    if(three<0)
    {
        three=0;
    }
    int two_one=min(two,one);
    one=one-two_one;
    two=two-two_one;
    if(two>0)
    {
        if(two>4)
        {
            two=two/4;
        }
        else
        two=1;
    }
    else
    two=0;
   // cout<<two<<endl;
    if(one>4)
    {
        one=one/4;
    }
    else if(one+two_one>4 || two_one==0 )
    one=1;
    else
    one=0;
  //  cout<<one<<endl;
    cout<<four+three_one+two_one+one+two+three<<endl;
    return 0;
}