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
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll search(char aa,string b,ll first)
{
    ll b_n=b.size();
    for(int i=first;i<b_n;i++)
    {
        if(b[i]==aa)
        return i;
    }
    return -1;
}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    string s;cin>>s;
    ll n;cin>>n;
    vector<pair<char,ll>>vec;
    ll index=0,sum=0;
    for(int i=0;i<s.size();i++)
    {
        vec.pb(make_pair(s[i],i));
    }
    sort(vec.begin(),vec.end());
    ///a=>1
    // b=>2
    // c=>2
    // a=>4
    // after sorting
    // a=>1
    // a=>4
    // b=>2
    // c=>3
    for(int i=0;i<s.size();i++)
    {
        sum+=(vec[i].first-'a'+1);
        if(sum>n){
            index=i;
            break;
        }
    }
    if(index==0)
    {
        if(n>=(s[0]-'a'+1)) cout<<s;
    }
    else{
        // 
    sort(vec.begin(), vec.end()-(vec.size()-index), sortbysec);
    for(int i=0;i<index;i++)
    {
        cout<<vec[i].first;
    }
    }
    // cout<<arr;
    cout<<endl;
}
return 0;
}
