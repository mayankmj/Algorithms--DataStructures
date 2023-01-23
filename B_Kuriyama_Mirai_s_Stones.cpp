#include<bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fo(i,n) for(int i=0;i<n;i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
#define f first
#define s second
#define pb push_back
#define v vector<int>
#define vl vector<long long >
#define pob pop_back
#define mp make_pair
#define max(a,b) (a<b? b:a)
#define min(a,b) ((a>b)? b:a)
void solve() {
  int n;
  cin>>n;
  vector<ll>vec(n);
  for(int i=0;i<n;i++) cin>>vec[i];
  vector<ll>vv;
  vv=vec;
  sort(vv.begin(),vv.end());
  vector<ll>sort(n),unsort(n);
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=vv[i];
    sort[i]=sum;
  }
  sum=0;
  for(int i=0;i<n;i++) {
    sum+=vec[i];
    unsort[i]=sum;
  }
  ll m ; cin>>m;
  for(int i=0;i<m;i++)
  {
    ll a,b,c; cin>>a>>b>>c; b--; c--;
    if(a==1){
        cout<<unsort[c]-unsort[b]+vec[b]<<endl;
    }
    else cout<<sort[c]-sort[b]+vv[b]<<endl;
  }






   }
int main(){

  solve();
  return 0;
}