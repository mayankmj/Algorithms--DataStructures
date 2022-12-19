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
    #define print(vec) for(auto &x:vec) cout<<x<< 
    
    #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    template <typename T> //cin for vector
    istream &operator>>(istream &istream, vector<T> &v){
    for(auto &it :v)
    cin>>it;
    return istream;
    }


    ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
    ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod*a%mod)%mod;a =(a%mod*a%mod)%mod;b >>= 1;}return ans%mod;}
    bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}




    bool isSorted(vector<ll>&vec,ll n)
    {
        vector<ll>temp;
        temp=vec;
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++)
        {
            if(vec[i]!=temp[i]) return 0;
        }
        return 1;
    }
    int32_t main(){
    fast
    ll t=1;
    cin>>t;
    while(t--){
        // ll n; cin>>n;
        // vector<ll>vec(n); cin>>vec;
        // // ll mx=INT_MIN,mn=INT_MAX,sum=0;
        // // for(int i=0;i<n;i++)
        // // {
        // //     sum+=vec[i];
        // //     mx=max(mx,vec[i]);
        // //     mn=min(mn,vec[i]);
        // // }
        // // ll opt1=mx+1,opt2=mn+1,opt3=sum/n,opt4=opt3+1,opt5=(mx+mn)/2,opt6=opt5+1;
        // // vector<ll>ans(6);
        // // ans[0]=opt1;ans[1]=opt2;ans[2]=opt3;
        // // ans[3]=opt4;
        // // ans[4]=opt5;
        // // ans[5]=opt6;
        // //  mx=0;
        // // ll aa=0,flag=0,x=0,check=0;
        // // for(int i=0;i<n-1;i++)
        // // {
        // //     if(vec[i]>vec[i+1]){
        // //         ll tt=abs(vec[i]-vec[i+1]); /// avg
        // //         ll dd=v[i+1]+(d+1)/2;
        // //         mx=max(diff,)
        // //     }
        // //     else {
        // //         ans.pb(mx);
        // //         mx=0;
        // //     }

        // // }
        // // // for(auto &x:ans) cout<<x<<" ";
        // // // cout<<endl;
        // // // for ascending descending
        // // // sort(ans.begin(),ans.end());


        // // auto ip = std::unique(ans.begin(), ans.begin() + ans.size());
        // //  ans.resize(std::distance(ans.begin(), ip));
        // // for(int j=0;j<ans.size();j++)
        // // {
        // //     vector<ll>temp(n,0);
        // //     if(isSorted(vec,n)== true){
        // //         flag=1;
        // //         break;
        // //     }
        // //     for(int i=0;i<n;i++)
        // //     {
        // //         temp[i]=abs(vec[i]-ans[j]);
        // //     }
        // //     if(isSorted(temp,n) == true){
        // //         aa=ans[j];
        // //         flag=1;
        // //         break;
        // //     }
        // //  }
        // // if(flag==1) cout<<aa<<endl;
        // // else cout<<"-1"<<endl;

        ll n; cin>>n;
        vector<ll>vec(n); cin>>vec;
        ll mx=INT_MIN,mxx=vec[n-1];
        if(isSorted(vec,n)){cout<<"0"<<endl; continue;}
        for(int i=0;i<n-1;i++)
        {
            mxx=max(mxx,vec[i]);
            if(vec[i+1]<vec[i]) mx=max(mx,(vec[i]+vec[i+1]+1)/2);
        }
        vector<ll>temp;
        temp=vec;
        for(int i=0;i<n;i++) temp[i]=abs(temp[i]-mx);
        if(isSorted(temp,n)) cout<<mx<<endl;
        else{
        for(int i=0;i<n;i++) vec[i]=abs(vec[i]-mxx);
        if(isSorted(vec,n)) cout<<mxx+1<<endl;
        else cout<<"-1"<<endl;
        }


    }
    return 0;
    }
