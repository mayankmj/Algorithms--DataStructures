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

double trapezium(double b, double h, double a){
    double ans = ((1.0/2.0)*(b+a))*h;
    return ans;
}

int32_t main(){
    fast
    ll t=1;
    cin>>t;
    while(t--){
        double n, b, h;
        cin>>n>>b>>h;
        vector<double> height(n);
        cin>>height;
        double triangle = (1.0/2.0)*(b*h), ans = 0.0;
        for(int i=1;i<n;i++){
            if(height[i-1]+h<=height[i])
                ans += triangle;
            else{
                double h1 = (height[i]-height[i-1]);
                double w1 = (b/h)*(h-h1);
                ans+=trapezium(b,h1,w1);
                // cout<<h1<<" "<<w1<<endl;
            }
        }
        // cout<<triangle<<" ";
        ans += triangle;
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
