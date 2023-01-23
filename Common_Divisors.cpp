#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define aint(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
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
 
const int z=1000001;
int divi[z+1];
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
int n;
cin>>n;
int ma=INT_MIN;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a>ma)
    ma=a;
    int aa=(int)sqrt(a);
   // cout<<aa<<endl;
    for(int j=1;j<=aa;j++)
    {
        if(a%j==0)
        {
            divi[j]++;
            if(a/j!=j)
            divi[a/j]++;
        }
    }
}
 
	for (int i = ma; i >= 1; i--) {
		if (divi[i] >= 2) {
			cout << i << endl;
			break;
		}
        }
return 0;
}
// #include <cmath>
// #include <iostream>
// using namespace std;

// const int MAX_VAL = 1e6;

// // divisors[i] = stores the count of numbers that have i as a divisor
// int divisors[MAX_VAL + 1];

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
	
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		int a;
// 		cin >> a;

// 		const int up = (int) sqrt(a);
// 		for (int div = 1; div <= up; div++) {
// 			if (a % div == 0) {
// 				// the divisor and quotient are both divisors of a
// 				divisors[div]++;
// 				// make sure not to double count!
// 				if (div != a / div) {
// 					divisors[a / div]++;
// 				}
// 			}
// 		}
// 	}

// 	for (int i = MAX_VAL; i >= 1; i--) {
// 		if (divisors[i] >= 2) {
// 			cout << i << endl;
// 			break;
// 		}
// 	}
//