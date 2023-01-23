#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;    // Write Your Code Here
    if(n<10){
    switch(n)
    {
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
        case 4:
        cout<<"four"<<endl;
        break;
        case 5:
        cout<<"five"<<endl;
        break;
        case 6:
        cout<<"six"<<endl;
        break;
        case 7:
        cout<<"seven";
        break; 
        case 8:
        cout<"<eight";
        break;
        case 9:
        cout<"<nine";
        break;
        default:
        cout<<"greator than 9";
        break;
    }
    }
    else
    {
        if(n%2==0)
        cout<<"even";
        else
        cout<<"odd"<<endl;
    }

    return 0;
}
