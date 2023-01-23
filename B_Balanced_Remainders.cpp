#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
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
    ll n;
    cin>>n;
    vector<int>vec(n),v_one,v_zero,v_two;
    for(auto &x:vec)
    cin>>x;
    ll factor=n/3;
    for(int i=0;i<n;i++)
    {
        if(vec[i]%3==0)
        v_zero.push_back(vec[i]);
        else if(vec[i]%3==1)
        v_one.push_back(vec[i]);
        else
        v_two.push_back(vec[i]);
    }
    ll one=v_one.size();
    ll two=v_two.size();
    ll zero=v_zero.size();
    ll sum=0;
    if(two>factor)
    {
        if(one>factor)
        sum=2*(one-factor)+two-factor;
        else if(zero>factor)
        sum=zero-factor+2*(two-factor);
        else
        sum=factor-zero+2*(factor-one);
    }
    else if(one>factor)
    {
        if(two>factor)
        sum=2*(one-factor)+two-factor;
        else if(zero>factor)
        sum=one-factor+2*(zero-factor);
        else
        sum=2*(factor-zero)+factor-two;
    }
    else{
        if(one>factor)
        sum=2*(zero-factor)+one-factor;
        else if(two>factor)
        sum=2*(two-factor)+zero-factor;
        else
        sum=2*(factor-two)+(factor-one);
    }
    cout<<sum<<endl;
}
return 0;
}
