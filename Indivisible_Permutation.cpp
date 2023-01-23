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

void Permutation(int n, int k)
{
    int p[n + 1];
 
    // First place all the numbers
    // in their respective places
    for (int i = 1; i <= n; i++)
        p[i] = i;
 
    // Modify for first n-k integers
    for (int i = 1; i < n - k; i++)
        p[i + 1] = i;
 
    // In first index place n-k
    p[1] = n - k;
 
    // Print the permutation
    for (int i = 1; i <= n; i++)
        cout << p[i] << " ";
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
int n;
cin>>n;
int k=n/2;
if(n==2)
{
    cout<<"2"<<" "<<"1";
}
else
{
    cout<<"1"<<" ";
    for(int i=3;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<"2"<<" ";
}
cout<<endl;

/*if (n % 2 != 0)
        cout << -1;
 
    // Otherwise
    else{
        for (int i = 1; i <= n / 2; i++){
            cout << 2 * i << " " << 2 * i - 1 << " ";
        }
    }
    cout<<endl;
}*/

}
return 0;
}
