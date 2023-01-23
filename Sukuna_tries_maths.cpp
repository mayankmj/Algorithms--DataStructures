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

int atMostSum(int arr[], int n, int k)
{
    int sum = 0;
    int cnt = 0, maxcnt = 0;
 
    for (int i = 0; i < n; i++) {
         
        // If adding current element doesn't
        // cross limit add it to current window
        if ((sum + arr[i]) <= k) {
            sum += arr[i];
            cnt++;
        }
 
        // Else, remove first element of current
        // window and add the current element
        else if(sum!=0)
        {
            sum = sum - arr[i - cnt] + arr[i];
        }
 
        // keep track of max length.
        maxcnt = max(cnt, maxcnt);
    }
    return maxcnt;
}
int bsearch(int prefixsum[], int n,
							int k)
{
	// Initialize result
	int ans = -1;

	// Do Binary Search for largest
	// subarray size
	int left = 1, right = n;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		// Check for all subarrays after mid
		int i;
		for (i = mid; i <= n; i++)
		{
			// Checking if all the subarrays
			// of a size less than k.
			if (prefixsum[i] - prefixsum[i - mid] > k)
				break;
		}

		// All subarrays of size mid have
		// sum less than or equal to k
		if (i == n + 1)
		{
			left = mid + 1;
			ans = mid;
		}

		// We found a subarray of size mid
		// with sum greater than k
		else
			right = mid - 1;
	}
	return ans;
}

// Return the maximum subarray size,
// such that all subarray of that size
// have sum less than K.
int maxSize(int arr[], int n, int k)
{
	// Initialize prefix sum array as 0.
	int prefixsum[n + 1];
	memset(prefixsum, 0, sizeof(prefixsum));

	// Finding prefix sum of the array.
	for (int i = 0; i < n; i++)
		prefixsum[i + 1] = prefixsum[i] +
						arr[i];

	return bsearch(prefixsum, n, k);
}
int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int flag=0,temp=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum%x!=0)
    cout<<"0"<<endl;
    else
    {
        if(n==1)
        cout<<"-1"<<endl;
        else if(sum%x==0)
        cout<<"1"<<endl;
        else
        {
            int m=maxSize(arr, n, x);
           // cout<<m<<endl;
            cout<<n-m<<endl;

        }
    }
}

return 0;
}
