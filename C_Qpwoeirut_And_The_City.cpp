#include <bits/stdc++.h>
using namespace std;
int FindMinSum(vector<int>&vec,int n)
{
        int sum = 0;
        for( int i = 0; i < n; i+=2) {
            // sum of all the odd indexes
           sum+=vec[i];
        } 

        int ans = sum;
        for( int i = n - 1; i > 0 ; i-=2 ){
            // removing the odd index and addinig the even index
            sum = sum - vec[i-1] + vec[i];
            // checking for the minimum sum 
            ans = min(sum,ans);
        }

        // Return the miinimum sum
        return ans;

}
// Driver Code
int main(){
    // Creating the array
    vector <int> vec = {2,0,11,2,0,2};
    int n = vec.size();

       // Function call
    cout << FindMinSum (vec,n) << endl;
    
return 0;
}