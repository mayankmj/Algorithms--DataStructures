#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int a,b,c=0;
    cin>>a>>b;
    int original=a;
    int prev=b;
    if(b>a)
    cout<<"1"<<endl;
    else if(a==b)
    {
        cout<<"2"<<endl;
    }
    else if(b>6)
    {
        while(a!=0)
        {
            a=a/b;
            c++;
        }
        cout<<c<<endl;
    }
    else if(a==3)
    {
        if(b==1)
        {
            b++;
            c++;
        }
        while(a!=0)
        {
            a=a/b;
            c++;
        }
        cout<<c<<endl;
    }
    else
    {
        int three=0,four=0,five=0,six=0;
        b=6;
        if(prev<7){
            six=6-prev;
        while(a!=0)
        {
            a=a/b;
            six++;
        }
        }
        b=5;
        a=original;
        if(prev<6){
            five=5-prev;
        while(a!=0)
        {
            a=a/b;
            five++;
        }
        }
        b=4;
        a=original;
        if(prev<5){
            four=4-prev;
        while(a!=0)
        {
            a=a/b;
            four++;
        }
        }
        b=3;
        a=original;
        if(prev<4){
            three=3-prev;
        while(a!=0)
        {
            a=a/b;
            three++;
        }
        }
        //cout<<three<<four<<five<<six<<endl;
        if(prev<=3)
        cout<<min(three,min(four,min(five,six)))<<endl;
        else if(prev==4)
        cout<<min(four,min(six,five))<<endl;
        else if(prev==5)
        cout<<min(five,six)<<endl;
        else
        cout<<six<<endl;
    }
}
return 0;
}
