/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> m;
    int i;
    for(i=0;i<10;i++)
    {
        m.insert(pair<char, int>('B'+i,65+i));
    }
    char ch='B';
    map<char,int>::iterator p;
    p=m.find(ch);
    if(p!=m.end())
    cout<<p->second;
    return 0;
 }

