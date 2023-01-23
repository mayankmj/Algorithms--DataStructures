#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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
#define array_print(n,arr) for(int i=0;i<n;i++) cout<<arr[i] 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
void computeLPSArray(string pat, int M,
                                 int lps[])
{
     
    // Length of the previous longest
    // prefix suffix
    int len = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0
 
    // The loop calculates lps[i] for
    // i = 1 to M-1
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
             
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0)
            {
                len = lps[len - 1];
 
                // Also, note that we do not
                // increment i here
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}
 
int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
 
    // Create lps[] that will hold the longest
    // prefix suffix values for pattern
    int lps[M];
    int j = 0; // index for pat[]
 
    // Preprocess the pattern (calculate lps[]
    // array)
    computeLPSArray(pat, M, lps);
 
    int i = 0; // index for txt[]
    int res = 0;
    int next_i = 0;
 
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
             
            // When we find pattern first time,
            // we iterate again to check if there
            // exists more pattern
            j = lps[j - 1];
            res++;
        }
 
        // Mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
             
            // Do not match lps[0..lps[j-1]]
            // characters, they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}



int32_t main(){
fast
string s;
cin>>s;
int c=1;
string s1="c",s2="ch",s3="cho",s4="chok",s5="choku",s6="chokud",s7="chokuda",s8="chokudai";
int ans=0;
int com=KMPSearch(s8,s);
int final=com;
//int cout<<ans<<endl;
ans=KMPSearch(s7,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s6,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s5,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s4,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s3,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s2,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
ans=KMPSearch(s1,s);
final=final+com*(ans-1);
//cout<<ans<<endl;
if(ans==0)
c=0;
cout<<final<<endl;
return 0;
}
