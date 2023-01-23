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
#define go(i,n) for(int i=0;i<n;i++)
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
double distance(ll x1, ll y1, ll x2, ll y2)
{
    // Calculating distance
    return sqrtl(binpow(x2 - x1, 2) + binpow(y2 - y1, 2) * 1.0);
}
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
int32_t main(){
fast
ll radius = 0.0, cur; 
        ll n, k; 
        cin >> n >> k; 
        set<ll> st; 
        ll t[k]; 
        ll people[n]; 
        pair<ll ,ll> p[n]; 
        go(i, k) 
        { 
            cin >> t[i]; 
            t[i]--; 
            st.insert(t[i]); 
        }    
 
        go(i, n) 
        { 
            people[i]=1e18; 
            cin >> p[i].first >> p[i].second; 
        } 
 
        go(i, k) 
        { 
            go(j, n) 
            { 
                if(st.find(j)!=st.end()) 
                { 
                    continue; 
                } 
 
                // cout << t[i] << ' ' << j << endl; 
//  
                cur = (abs(p[j].first - p[t[i]].first) * abs(p[j].first - p[t[i]].first)); 
                cur += (abs(p[j].second - p[t[i]].second) * abs(p[j].second - p[t[i]].second)); 
 
                people[j]=min(people[j], cur); 
                // cout << j << " : " << people[j] << endl; 
            } 
            // cout << endl; 
        } 
 
        go(i, n) 
        { 
            if(st.find(i)!=st.end()) 
            { 
                continue; 
            } 
            // cout << people[i] << ' '; 
            radius=max(radius, people[i]); 
        } 
        cout << setprecision(17) << sqrt(radius) << endl;
}