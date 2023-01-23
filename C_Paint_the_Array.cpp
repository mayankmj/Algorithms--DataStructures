#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
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
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
ll findGCD(vector<ll int> arr, ll n)
{
    ll result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
   /* ll n;
    cin>>n;
    ll arr[n];
    ll j=0,k=0;
    ll even[n],odd[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if((i)%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    ll od=findGCD(odd,k);
    ll eve=findGCD(even,j);
    ll flag=1;
   // cout<<od<<" "<<eve<<endl;
  /*  ll flag=1;
    for(int i=1;i<n;i=i+2)
    {
        if(arr[i]%eve==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout<<eve<<endl;
    else
    {
        flag=1;
        for(int i=0;i<n;i=i+2)
        {
            if(arr[i]%od==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<od<<endl;
        else
        cout<<"0"<<endl;
    }*/
   /* if(od>eve){
    for(int i=1;i<n;i=i+2)
    {
        if(arr[i]%od==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout<<odd<<endl;
    else
    cout<<"0"<<endl;
    }
    else
    {
        flag=1;
        for(int i=1;i<n;i=i+2)
        {
            if(arr[i]%eve==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        cout<<"0"<<endl;
        else
        cout<<eve<<endl;
    }*/
    ll n;
    cin>>n;
    vector<ll int> v;
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);    
    }
      //  cout<<"grdf"<<endl;
        vector<ll int> even,odd;
        ll flag=0;
        ll odd_no=0,even_no=0;
        for(int x=0;x<v.size();x++)
        {
            if(x%2==0){
            even.push_back(v[x]);
            even_no++;}
            else{
            odd.push_back(v[x]);
            odd_no++;}
        }     
        ll eve=findGCD(even,even_no);
        ll od=findGCD(odd,odd_no);
    //    cout<<eve<<" "<<od<<endl;
        for(int i=0;i<odd_no;i++)
        {
            if(odd[i]%eve==0){
            flag=1;break;}
        }
        if(flag==0)
        cout<<eve<<endl;
        else
        {
            flag=0;
            for(int i=0;i<even_no;i++)
            {
                if(even[i]%od==0){
                flag=1;break;}
            }
          //  cout<<v[1]%eve<<endl;
        if(flag==0)
        cout<<od<<endl;
        else
        cout<<"0"<<endl;
        }
}
return 0;
}
