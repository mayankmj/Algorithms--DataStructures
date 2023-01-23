// Simran 
// Full Comdingbazi 
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vll vector<ll>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const ll mod = 1e9 + 7;
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
bool prime[1000001];
void sieve()
{

    memset(prime, true, sizeof(prime));
    prime[1] = false;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0, cnt = 0;
    int i = 0;
    ll bits = 0;
    for (i = 0; i <= 30; i++)
    {
        cnt = (1 << i);
        if (ans + cnt * n > k)
            break;
        ans += (cnt * n);
        bits += n;
        // cout<<ans<<' ';
        // break;
    }
    // 4 +2*4=12<15
    // 12+4*4=28
    //  cout<<bits<<"\n";
    //3<6
    //i=1;
    //
    ll l = 0, h = n;
    ll k1 = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (mid * (1 << i) + ans <= k)
        {
            l = mid + 1;
            // k
        }
        else
            h = mid - 1, k1 = mid;
    }
     //cout<<k1<<'\n';
    bits += k1;
    ll extra = k1 * (1 << i) + ans;
   // cout << k1 * (1 << i) + ans << '\n';
    ll extra1 = k - extra;

    bits -= __builtin_popcount(abs(extra1));
     cout << bits << '\n';
}
int main()
{
    FAST;
    sieve();

    ll n;
    // n = 1;
    cin >> n;
    while (n--)
        solve();
}