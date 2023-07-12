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
#define print(vec) for(auto &x:vec) cout<<x<<' ';
  
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

template <typename T> // cin for vector
istream &operator>>(istream &is, vector<T> &v){
    for (auto &it :v) is >> it;
    return is;
}

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return ((a/gcd(a,b))*b);
}

ll binpow(ll a, ll b){
    ll ans = 1;
    while(b > 0){
        if (b & 1) ans = (ans % mod * a % mod) % mod;
        a = (a % mod * a % mod) % mod;
        b >>= 1;
    }
    return ans % mod;
}

bool is_prime(ll n){
    if(n==2) return true;
    else if (n <= 1||n>1000000||n%2==0)  return false;
    for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;
    return true;
}

ll dfs(vector<vector<ll>>& grid) {
    ll ans=0;
    ll r=grid.size(),c=grid[0].size();
    int dir_x[]={0,0,1,-1};
    int dir_y[]={1,-1,0,0}; 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]==0 || grid[i][j]==-1) continue;
            queue<pair<ll,ll>> q;
            q.push({i,j});
            ans+=grid[i][j];
            grid[i][j]=-1;
            while(!q.empty()){
                auto front=q.front();
                q.pop();
                for(int d=0;d<4;d++){
                    ll qr=front.first + dir_x[d];
                    ll qc=front.second + dir_y[d];
                    if(qr<0 || qr>=r || qc<0 || qc>=c || grid[qr][qc] == 0 || grid[qr][qc] == -1) continue;
                    ans+=grid[qr][qc];
                    q.push({qr,qc});
                    grid[qr][qc]=-1;
                }
            }
        }
    }  
    return ans;     
}

int32_t main(){
fast
ll t=1;
// cin>>t;
while(t--){
    // // ll n,m; cin>>n>>m;
    // // vector<vector<ll>>grid(n,vector<ll>(m,0));
    // // ll n; cin>>n;
    // string
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++) cin>>grid[i][j];
    // }
    // // for(int i=0;i<n;i++)
    // // {
    // //     for(int j=0;j<m;j++) cout<<grid[i][j]<<" ";
    // //     cout<<endl;
    // // }
    // // cout<<dfs(grid)<<endl;













    string s; cin>>s;
    map<char,int>mpp;
    for(auto &x:s)
    {
        mpp[x]++;
    }
    int mn=INT_MAX,gcd=0;
    for(auto &x:mpp){
        mn=min(mn,x.second);
         gcd = __gcd(x.second,gcd);
         cout<<gcd<<" ";
    }
    int ans=0;
    for(auto &x:mpp){
        int temp=x.second/gcd;
        ans+=temp+x.second%gcd;
    }
    cout<<ans<<endl;
}
return 0;
}
