// Simple C++ program to count distinct
// elements in every window of size k
#include <bits/stdc++.h>
using namespace std;

void countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashmap hm
    unordered_map<int, int> hm;
 
    // initialize distinct element count for current window
    int dist_count = 0;
 
    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++) {
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
    }
 
    // Print count of first window
    int final[n],j=0;
    final[0]=dist_count;
 
    // Traverse through the remaining array
    for (int i = k; i < n; i++) {
        j++;
        // Remove first element of previous window
        // If there was only one occurrence, then reduce distinct count.
        if (hm[arr[i - k]] == 1) {
            dist_count--;
        }
        // reduce count of the removed element
        hm[arr[i - k]] -= 1;
 
        // Add new element of current window
        // If this element appears first time,
        // increment distinct element count
 
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
 
        // Print count of current window

        final[j]=dist_count;
    }
    sort(final,final+n-k);
    cout<<final[n-k-1]<<endl;
}
int main()
{
int n,k,c=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    if(arr[i]==arr[i+1])
    c++;
}
if(c==(n-1))
cout<<"1"<<endl;
else
countDistinct(arr,k,n);
return 0;
}
