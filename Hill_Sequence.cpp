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
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,y,freq=0;
    cin>>n;
    map<int,int> mayank;
    vector<int> res,ve;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        mayank[y]++;
    }
    for(auto y: mayank)
    {
        if(y.second>2)
        {
            freq=1;
            break;
        }
        ve.push_back(y.first);
    }
    sort(ve.begin(),ve.end());
    if(freq==1 || mayank[ve[ve.size()-1]]==2)
    cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<ve.size();i++)
        {
            if(mayank[ve[i]]==2)
            cout<<ve[i]<<" ";
        }
        for(int i=ve.size()-1;i>=0;i--)
        {
            cout<<ve[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}
