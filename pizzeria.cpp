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
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
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
int32_t main(){
fast
    struct contributor
{
  string name;
  int types;
  vector<pair<string,int> > v;
};
struct project{
  string name;
  int duration;
  int score;
  int days;
  int no;
  vector<pair<string,int> > v;
  vector<string> ans;
};


void ans(int c,int p,contributor arr[],project a[]){
    cout<<p<<endl;
    set<string>s;
    REP(i,p){
      cout<<a[i].name<<endl;
      int k=  a[i].no;
      REP(j,k){
        REP(l,c){
          int m=arr[i].types;
          REP(n,m){
        if(a[i].v[j].first==arr[l].v[n].first && a[i].v[j].second-1 <=arr[l].v[n].second){
          s.insert(arr[l].name);
          }

        }
      }
    }
    vector<string> v(s.begin(), s.end());
    REP(i,v.size()){
      cout<<v[i]<<" ";
    }
    cout<<endl;

}
return 0;
}
