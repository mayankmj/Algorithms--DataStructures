/* dontdude */

#include<bits/stdc++.h> 
using namespace std;

#define fastio()           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fileio()           freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout); 
#define endl               "\n"
#define pb                 push_back
#define ppb                pop_back
#define ff                 first
#define ss                 second
#define inf                LLONG_MAX
#define _inf               LLONG_MIN
#define int                long long
#define float              long double
#define fr(i,a,b)          for(int i=a;i<b;i++)
#define dbg(x)             cout<<#x<<" = "<<x<<"\n";
#define all(x)             (x).begin(), (x).end()
#define rall(x)            (x).rbegin(),(x).rend()
#define fixdec(x, n)       fixed<<setprecision(n)<<x
#define setbits(n)         __builtin_popcountll(n)
#define gtrthan(v, x)      upper_bound(all(v), x) - v.begin()          
#define notlsthan(v, x)    lower_bound(all(v), x) - v.begin()        

typedef pair<int, int> Z;
typedef vector<int> V;
typedef vector<V> Tree;
typedef vector<vector<Z>> Graph;

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(float t) {cerr << t;}
void _print(bool x) {cerr << (x ? "YES" : "NO");} 
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(const T &x) {for (auto &i : x) _print(i); }

int nxt() {int x; cin >> x; return x; } 
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> v; for (int i = 2; i <= n; i++)if (arr[i] == 0) {v.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return v;}
int _ncr(int n, int r) { int p = 1, k = 1; if(n - r < r)   r = n - r; if(r != 0) { while(r) { p *= n; k *= r; int m = __gcd(p, k); p /= m;  k /= m; n--;  r--; } } else  p = 1; return p; }
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool helper(int i, int j, int k, string s, string a){
    if(i == -1)  return true;
    
    bool res = false;
    if(s[i] == a[k] && helper(i-1, j, k+1, s, a))   res = true; 
    if(s[i] == a[j] && helper(i-1, j+1, k, s, a))   res = true;
    return res;
}

void solve(int t){
    
    int n = nxt();

    string s, a;
    cin>>s>>a;

    if(helper(n-1, 0, n-1, s, a))  cout<<"Case "<<t<<": YES"<<endl;
    else cout<<"Case "<<t<<": NO"<<endl;
}

int32_t main() {   
    
    fastio();
    //fileio();

    int t;cin>>t;
    for(int i = 1; i <= t; i++)  
    solve(i);

  return 0;
}