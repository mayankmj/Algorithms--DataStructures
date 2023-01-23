#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[2*n-1-i]<<" "<<arr[i]<<" ";
        }
    }
    return 0;

}