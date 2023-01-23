// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pi (3.141592653589)
// #define mod 1000000007
// #define float double
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rrep(i, n) for(int i=n-1;i>=0;i--)
// #define rep(i,n) for(int i=0;i<n;i++)
// #define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
// #define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
// #define print(vec) for(auto &x:vec) cout<<x<< 
  
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// template <typename T> //cin for vector
// istream &operator>>(istream &istream, vector<T> &v){
// for(auto &it :v)
// cin>>it;
// return istream;
// }


// ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
// ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
// bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}





// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
//     ll n; cin>>n;
//     vector<ll>a(n),b(n); cin>>a>>b;
//     vector<pair<ll,ll>>vec;
//     for(int i=0;i<n;i++) {
//         vec.pb(make_pair(a[i],b[i]));
//     }
//     sort(vec.begin(),vec.end());
//     vector<ll>ans(n,0);
//     for(int i=0;i<n;i++)
//     {
//         for()
//     }
// }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// UserName SeniorLikeToCode [Abhishek Gupta (AKGEC 3rd year)];

#define int     int64_t
#define endl    '\n'

#define rep(i,a,n)         for(int i = (a); i < (n); i++)
#define rrep(i,a,n)        for(int i = (a); i >= (n); i--)
#define each(a,x)          for(auto &a:x)

#define all(x)             x.begin(), x.end()
#define rall(x)            x.rbegin(),x.rend()
#define sz(x)              (int32_t)(x).size()
#define setBits(x)         __builtin_popcountll(x)

#define F  first
#define S  second
#define pb push_back
#define Z  pair<int,int>

/*
Problem Statement:
A Students of akgec ,Thinking to prank with his senior to do this
they change the rollnumber of every student of their group into a binary number
where the most significant bit alway 1.

e.g.   8 -> 1000, 4 -> 100, 11, 1011

Input:
first line contain group size n (1 <= n <= 1e5).
Second line contain roll number of group member ai for i in (1,n) and
each ai is in range(1,(1 << 30));


Output:
change Every roll number into binary number.

Input:
4
3 5 7 9
Output:
11
101
111
1001


Input:
7
3 99 20 9 2 9 4

Output:
11
1100011
10100
1001
10
1001
100

Input:
3

Output:
2 8 32
10
1000
100000


*/

void solve() {
    int n; cin >> n;
    vector<int> v(n); each(a, v) cin >> a;

    for (int i = 0; i < n; i++) {
        int a = v[i];
        string s;
        for (int j = 0; j <= 30; j++) {
            if (a == 0) break;
            if (a & (1 << j)) {
                s += 1 + '0';
                a -= (1 << j);
            }
            else s += '0';
        }
        reverse(all(s));
        cout << s << endl;
    }
    // each(a, v) cout << bitset<8>(a) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;

    solve();
}