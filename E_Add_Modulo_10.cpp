#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}



int main(){
fast
ll t=1;
cin>>t;
while(t--){
    ll n; cin>>n;
    vector<ll>vec(n); 
    cin >> vec;
    ll flag=0,five=0,button=0,check=0,ten=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==10){
            ten++;
        }
        else if(vec[i]==5) five++;
        if(vec[i]%10==0 && button==0) {check=vec[i]; button++;}
        else if(vec[i]%10==0 && button!=0){
            if(check!=vec[i]) {flag=1; break;} 
        }
        if(flag==1) break;
    }
    if(flag==1) cout<<"NO"<<endl;
    else if(five!=0){
        if(ten+five==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(button!=0){
        if(button==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    else {
        bool flag2 = false, flag12 = false;
        for (int i = 0; i < n; ++i) {
            int x = vec[i];
            while (x % 10 != 2) {
                ll a=x%10;
                x = x+a;
            }
            if (x % 20 == 2) {
                flag2 = true;
            } else {
                flag12 = true;
            }
        }
        cout << ((flag2 & flag12) ? "No" : "Yes") << endl;}
}
return 0;
}
