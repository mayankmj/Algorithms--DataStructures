#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
 map<int,int> findRepeating(int arr[], int size){
 
    // Hash map to store the
    // frequency of elements
    map<int,int> frequency;
     
    // Loop to store the frequency of
    // elements of array
    for (int i = 0; i < size; i++)
    frequency[arr[i]]++;
    return frequency;
 }
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n],final[n],j=0,duplicate[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int> frequency = findRepeating(arr,n);
    for(auto x : frequency){
        int i=0;
        if (frequency[x.first] > 0){
            duplicate[i]=x.first;
            f[i]=frequency[x.first];
            i++;
    }
    }
    for(int i=0;i<n;i++)
    {
        j=0;
        for(int m=0;i<n;i++)
        {
            if(arr[i]==duplicate[m])
            {
                    if(j>k)
                    {
                        final[m]=0;
                    }
                    final[m]=j;
                    j++;
        }
            }
        }
    for(int i=0;i<=j;i++)
    {
        cout<<final[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
