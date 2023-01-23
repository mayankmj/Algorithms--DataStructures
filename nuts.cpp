#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>10)
        {
            count=count+(arr[i]-10);
        }
    }
    cout<<count<<endl;
}