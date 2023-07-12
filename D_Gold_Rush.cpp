
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
#define print(vec) for(auto &x:vec) cout<<x<< 
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}


ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}




int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n,m; cin>>n>>m;
    ll flag=0;
    while(m<n)
    {
        if(m%2 == 0) {
            m = m + (m/2); 
        }
        else 
         m = m + m*2;
    }
    if(m == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}


#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vll vector<long long>
#define mod 1000000007; 
int row[] = {-1,0,1,0};
int col[] = {0,-1,0,1};

int bfs(vector<vector<int>> &a, int x, int y){

    vector<vi> temp = a;
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));

    queue<pair<int,int>> q;
    q.push({ x,y });
    int sum = 0;
    vis[x][y] = 1;

    while(!q.empty()){


        int i = q.front().first;
        int j = q.front().second;
        // cout<<i<<' '<<j<<" "<<sum<<'\n';
        sum += temp[i][j];
        q.pop();

        for(int k=0; k<4; k++){

            int newi = i + row[k];
            int newj = j + col[k];

            if(newi >= 0 and newj >= 0 and newi < a.size() and newj < a[0].size() 
                and vis[newi][newj] == 0 and a[newi][newj] != 0){

                // vis[newi][newj] = 1;
                a[newi][newj] = 0;
                q.push({ newi, newj });
            }
        }
    }
    // cout<<sum<<' ';
    return sum;
}

void solve(){

    int n, m;
    cin>>n>>m;

    vector<vi> a(n, vi(m, 0));
    forn(i,0,n){
        forn(j,0,m) cin>>a[i][j];
    }
    // for(auto h: a){
    //     for(auto f: h) cout<<f<<' ';
    //     cout<<'\n';
    // }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(a[i][j] != 0){
                ans = max(ans, bfs(a, i, j));

            }
        }
    }
    cout<<ans<<'\n';
}

signed main(){
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}