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
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
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
bool isPossibleTriangle(int arr[], 
                        int N)
{
    // If number of elements are 
    // less than 3, then no 
    // triangle is possible
    if (N < 3)
    return false;

    // first sort the array
    sort(arr, arr + N);

    // loop for all 3 
    // consecutive triplets
    for (int i = 0; i < N - 2; i++)

        // If triplet satisfies 
        // triangle condition, break
        if (arr[i] + arr[i + 1] > arr[i + 2])
            return true;
return false;
}
int32_t main(){
fast
int n;
cin>>n;
int arr[n];
array_input(n,arr);
isPossibleTriangle(arr, n) ? cout << "Yes" :cout << "No";
return 0;
}
