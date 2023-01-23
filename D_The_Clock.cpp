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
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll reversDigits(ll num) {
     
    ll rev = 0  ;
     
    while(num != 0){        
        int rem = num % 10 ;
        num /= 10 ;
         
        if(rev > INT_MAX/10 || rev == INT_MAX/10 && rem > 7){
            return 0 ;
        }
         
        if(rev < INT_MIN/10 || rev == INT_MIN/10 && rem < -8){
            return 0 ;
        }
         
        rev = rev*10 + rem ;
    }
     
    return rev ;
     
}
bool isPalindrome(string p)
{
    string v=p.substr(0,2);
    string m=p.substr(3,2);
   
    swap(m[1],m[0]);
     //cout<<m<<" "<<v<<endl;
    if(m==v) return 1;
    else return 0;
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    string s;
    ll n;
    cin>>s>>n;
    ll count=0,n_min=0;
    string zero="0",q=":",b;
    string extra=s;
   // if(isPalindrome(s)==true) count++;
    ll bre=1440;
    while(bre--){
        string min=s.substr(3,2);
        string hour=s.substr(0,2); ll zx=stoi(min);
        ll temp=zx+n;
        if(temp>=60)  {n_min=temp%60;} //cout<<"aaaa"<<n_min<<endl;}
        else  n_min=temp;          
            ll int_hour=stoi(hour);
            ll z=temp/60;
            int_hour+=z;
            string a; //cout<<int_hour<<" "<<n_min<<endl;
            if(isPalindrome(s)==true){ count++; }//cout<<s<<endl;}
            if(s=="24:00") s="00:00";
             if(int_hour>=23 && (n_min+n)>=60 || (int_hour)>=24){
                if(int_hour<10) { int_hour=int_hour%24;
                    s="0"; s.append((to_string(int_hour)));}
                else {int_hour=int_hour%24;s=to_string(int_hour);}
                if(n_min<10) if(n_min<10) { b="0"; b.append(to_string(n_min));}
                else b=to_string(n_min);
                s.append(q);
                s.append(b);  
             } 
            s.clear();
            if(int_hour<10){ s="0"; s.append(to_string(int_hour));}
            else s=to_string(int_hour);
            if(n_min<10) { b="0"; b.append(to_string(n_min));}
            else b=to_string(n_min);
            s.append(q);
            s.append(b);    
          // cout<<s<<" "<<int_hour<<endl;    
           
             if(extra==s) break;
    }
    cout<<count<<endl;
}
return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pi (3.141592653589)
// #define mod 1000000007
// #define float double
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) c.begin(), c.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rrep(i, n) for(int i=n-1;i>=0;i--)
// #define rep(i,n) for(int i=0;i<n;i++)
// #define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
// #define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
// template <typename T> //cin for vector
// istream &operator>>(istream &istream, vector<T> &v){
// for(auto &it :v)
// cin>>it;
// return istream;
// }
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


// ll binpow(ll a, ll b) {
// long long res = 1;
// while (b > 0) {
// if (b & 1)
// res = res * a;
// a = a * a;
// b >>= 1;
// }
// return res;
// }
// ll reversDigits(ll num) {
     
//     ll rev = 0  ;
     
//     while(num != 0){        
//         int rem = num % 10 ;
//         num /= 10 ;
         
//         if(rev > INT_MAX/10 || rev == INT_MAX/10 && rem > 7){
//             return 0 ;
//         }
         
//         if(rev < INT_MIN/10 || rev == INT_MIN/10 && rem < -8){
//             return 0 ;
//         }
         
//         rev = rev*10 + rem ;
//     }
     
//     return rev ;
     
// }
// bool isPalindrome(string p)
// {
//     string v=p.substr(0,2);
//     string m=p.substr(3,2);
   
//     swap(m[1],m[0]);
//      //cout<<m<<" "<<v<<endl;
//     if(m==v) return 1;
//     else return 0;
// }
// int32_t main(){
// fast
// ll t=1;
// cin>>t;
// while(t--){
//     string s;
//     ll n;
//     cin>>s>>n;
//     ll count=0,n_min=0;
//     string zero="0",q=":",b;
//     string extra=s;
//    // if(isPalindrome(s)==true) count++;
//     ll bre=1440;
//     while(bre--){
//         string min=s.substr(3,2);
//         string hour=s.substr(0,2); ll zx=stoi(min);
//         ll temp=zx+n;
//         if(temp>=60)  {n_min=temp%60;} //cout<<"aaaa"<<n_min<<endl;}
//         else  n_min=temp;          
//             ll int_hour=stoi(hour);
//             ll z=temp/60;
//             int_hour+=z;
//             string a; //cout<<int_hour<<" "<<n_min<<endl;
//             if(isPalindrome(s)==true){ count++; cout<<s<<endl;}
//             s.clear();
//             if(int_hour<10){ s="0"; s.append(to_string(int_hour));}
//             else s=to_string(int_hour);
//             if(n_min<10) { b="0"; b.append(to_string(n_min));}
//             else b=to_string(n_min);
//             s.append(q);
//             s.append(b);    
//            cout<<s<<" "<<int_hour<<endl;    
//              if(int_hour>=23 && (n_min+n)>=60){
//                 if(int_hour<10) { int_hour=int_hour%24;
//                     s="0"; s.append((to_string(int_hour)));}
//                 else {int_hour=int_hour%24;s=to_string(int_hour);}
//                 if(n_min<10) if(n_min<10) { b="0"; b.append(to_string(n_min));}
//                 else b=to_string(n_min);
//                 s.append(q);
//                 s.append(b);  
//              } 
//              if(extra==s) break;
//     }
//     cout<<count<<endl;
// }
// return 0;
// }



