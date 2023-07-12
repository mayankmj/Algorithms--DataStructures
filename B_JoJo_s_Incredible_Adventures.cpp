#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll ans_finder(ll n)
{
        if(n%2 == 0) {
            ll mx=INT_MIN;
            n++;
            for(int i=2;i*i<=(n);i++)
            {
                // cout<<i<<" ";
                if(n%i == 0){
                    ll tt1=n/i, tt2=n-n/i;
                    mx=max(mx,tt1*tt2);
                }
            }
            ll tt2=(n/2)*((n/2)+1);
            mx=max(mx,tt2);
            return mx;
        }
        return((n/2)+1)*((n/2)+1);    
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        ll max_one=0,temp=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1') temp++;
            max_one=max(max_one,temp);
            if(s[i] == '0') {temp=0; flag++;}
            if(i ==  s.size()-1 && s.size()>1 && flag && s[i] =='1'){
                if(s[0] == '1') temp++;
                 max_one=max(max_one,temp);
            }
        }
        // max_one=7;
        // cout<<max_one<<endl;
        if(flag==0) cout<<s.size()*s.size()<<endl;
        else if(!max_one) cout<<"0"<<endl;
        else if(max_one == 1) cout<<"1"<<endl;
        else if(max_one == 2) cout<<"2"<<endl;
        else cout<<ans_finder(max_one)<<endl;

    }
}
