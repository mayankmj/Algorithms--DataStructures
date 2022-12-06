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

struct DSU {
    vector<int>parent,sizz;
 
    DSU () {}
 
    DSU(int n) {
        for(int i=0;i<=n;i++) parent.push_back(i);
        sizz.assign(n+1,1);
    }
    
    int find_set(int v) {
        if(parent[v] == v) return v;
        return parent[v] = find_set(parent[v]);
    }
 
    void union_set(int u,int v) {
        u = find_set(u);
        v = find_set(v);
 
        if(v == u) return;
 
        if(sizz[u] > sizz[v]) swap(u,v);
        parent[u] = v;
        sizz[v] += sizz[u];
    }
};



int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    string s; cin>>s;
    set<ll>st;
    for(int i=0;i<26;i++) st.insert(i); 
    map<ll,ll>mp;
    string res="";
    DSU gr(26);
    for(int i=0;i<n;i++)
    {
        ll temp=s[i]-'a';
        if(mp.find(temp)!=mp.end()) {
            res+=(char(mp[temp]+'a'));
           continue;
        }
        if(mp.size()==25){
            mp[temp]=*st.begin();
            res+=(char(mp[temp]+'a'));
            continue;
        }
        for(auto j:st) {
            if(gr.find_set(j) != gr.find_set(temp)) {
                mp[temp] = j;
               res+=(char(mp[temp]+'a'));
                gr.union_set(temp,j);
                break;
            }
        }
        st.erase(st.find(mp[temp]));
    }
    cout<<res;
    // for(int i=0;i<n;i++) cout<<(char(mp[s[i]-'a']+'a'));
    cout<<endl;
}
return 0;
}
