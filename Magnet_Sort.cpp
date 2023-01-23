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
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<pair<int,char>>vec;
    ll arr[n];
    vector<int>no;
    vector<char>pole;
    ll temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        no.push_back(temp);
    }
    char s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        pole.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        vec.push_back(make_pair(no[i],pole[i]));
        arr[i]=no[i];
    }
    sort(arr,arr+n);
    ll flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i].first>vec[i+1].first)
        {
            flag=1;
            break;
        }
    }
    //////////////
    /////////////
    ///////////////
    ///////////////
   // cout<<flag<<endl;
    if(flag==0)
    cout<<"0"<<endl;
    else
    {
        flag=0;
        char a=vec[0].second;
       // cout<<a<<endl;
        for(auto x:vec)
        {
            if(x.second!=vec[0].second)
            {
                flag=1;
                break;
            }
        }
     //   cout<<flag<<endl;
        if(flag==0)
        cout<<"-1"<<endl;
        else{
        vector<int>diff;
        ll j=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i].first!=arr[i])
            {
                diff.push_back(i);
                j++;
            }
        }
        flag=0;
        sort(diff.begin(),diff.end());
        for(int i=0;i<=diff[0];i++)
        {
            for(int k=(n-1);k>=diff[j-1];k--)
            {
                if(vec[i].second!=vec[k].second)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
        }
    }
}
return 0;
}
