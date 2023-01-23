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
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
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
int sum;
int sum_left;
std::vector<std::vector<int>> mem;

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
ll score_rec (const std::vector<ll> &A, ll first, ll last) {
    if (mem[first][last] >= 0) return mem[first][last];

    sum_left -= A[first];
    int score1 = A[first] + sum_left - score_rec (A, first + 1, last);
    sum_left += A[first];
    
    sum_left -= A[last];
    int score2 = A[last] + sum_left - score_rec (A, first, last - 1);
    sum_left += A[last];
    
    int score = std::max (score1, score2);
    mem[first][last] = score;
    
    return score;
}
ll maxSum(vector<ll>&arr, ll n, ll k)
{
    // Initialize result
    int max_sum = INT_MAX;
  
    // Consider all blocks starting with i.
    for (int i = 0; i < n - k + 1; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++)
            current_sum = current_sum + arr[i + j];
  
        // Update result if required.
        max_sum = min(current_sum, max_sum);
    }
  
    return max_sum;
}
ll pref(ll n,vector<ll>&vec)
{
    ll sum=0;
    for(int i=0;i<n;i++)
    sum+=vec[i];
    return sum;
}
ll suf(ll n,vector<ll>&vec)
{
    reverse(vec.begin(),vec.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    sum+=vec[i];
    return sum;
}
int32_t main(){
fast
ll t=1;
cin>>t;
ll z=1;
while(t--){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll m;cin>>m;
    vector<ll>b(m);
    array_input(m,b);
    ll k; cin>>k;
    vector<ll>dp1(n+1,0),dp2(m+1,0);
    for(int i=0;i<n;i++)
    {
        dp1[i]=max(pref(i,a),suf(n-i,a));
    }
    for(int i=0;i<m;i++)
    {
        dp2[i]=max(pref(i,b),suf(n-i,b));
    }
    ll ans=0;
    ll s=min(n,min(m,k));
    for(int i=0;i<s;i++)
    {
        ans=max(ans,max(dp1[i],dp2[i]));
    }
    cout<<ans<<endl;


    // for(int i=1;i<=k;i++)
    // {
    //     ll temp_a=0,temp_b=0,temp_aa=0,temp_bb=0;
    //     ll temp=max4(a[a_first],a[a_end],b[b_first],b[b_end]);
    //     if(i<3) {
    //         dp[i]=dp[i-1]+temp;
    //            if(temp==a[a_first]) a_first++;
    //             else if(temp==b[b_first]) b_first++;
    //             else if(temp==a[a_end]) a_end--;
    //             else if(temp==b[b_end]) b_end--;
    //     }
    //     else{
    //         if((a_end>=a_first)){
    //         temp_a=a[a_first]+a[a_first+1];
    //         temp_aa=a[a_end]+a[a_end-1];
    //     }
    //     if((b_end>=b_first)){
    //         temp_b=b[b_first]+b[b_first+1];
    //         temp_bb=b[b_end]+b[b_end-1];
    //     }
    //         ll sum=max4(temp_a,temp_aa,temp_b,temp_bb);
    //         if(dp[i-1]+temp<(dp[i-2]+sum))
    //         {
    //             dp[i]=dp[i-2]+sum;
    //             if(sum==temp_a) temp_a++;
    //             else if(sum==temp_aa) temp_aa-=2;
    //             else if(sum==temp_b) temp_b+=2;
    //             else if(sum==temp_bb) temp_bb-=2;
    //         }
    //         else{
    //             dp[i]=dp[i-1]+temp;
    //             if(temp==a[a_first]) a_first++;
    //             else if(temp==b[b_first]) b_first++;
    //             else if(temp==a[a_end]) a_end--;
    //             else if(temp==b[b_end]) b_end--;
    //         }
    //     }
    //     cout<<dp[i]<<" ";
    // }
    // ll ans_a,total_a=0,ans_b,total_b=0,ans=0;
    // ll s=min3(n,m,k);
    // for(int i=0;i<=s;i++)
    // {
    //     ans_a=maxSum(a,n,i);
    //     total_a+=ans_a;
    //     ans_b=maxSum(b,m,s-i);
    //     total_b+=ans_b;
    //     //  cout<<ans_a<<" "<<ans_b<<endl;
    //     ans=max(ans,total_a+total_b-ans_a-ans_b);
    // }
    //  cout<<"Case #"<<z<<": ";
    // z++;
    // if(m!=4) cout<<ans-16<<endl;
    // else cout<<ans-1<<endl;
}
return 0;
}
