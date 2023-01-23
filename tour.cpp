#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0;
    cin>>m>>n;
    long long int origin[n],dest[n];
    if(n==0)
    {
        cout<<m<<endl;
    }
    else{
        int num=m;
        int number=n;
    while(n>0 || m>0)
    {
        if(m>0)
        cin>>origin[i];
        if(n>0)
        cin>>dest[i];
        n--;
        m--;
        i++;
    }
    n=number;
    m=num;
    sort(dest,dest+n);
    // Traverse the sorted array
    long long int res = 0;
    for (int i = 0; i < n; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && dest[i] == dest[i + 1])
            i++;
 
        res++;
    }
    long long int rest=0;
    for (int i = 0; i < m; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && origin[i] == origin[i + 1])
            i++;
 
        rest++;
    }
   // cout<<res<<rest<<endl;
   //cout<<res<<endl;
    cout<<(res*rest)+(n-res)+(m-rest)<<endl;
    }
}