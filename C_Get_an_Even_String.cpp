#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long 

ll mod=998244353;
ll qp(ll x,ll n){
	ll ans=1;
	while(n){
		if(n&1)ans=ans*x%mod;
		x=x*x%mod;
		n/=2;
	}
	return ans;
}

int t;
int n;
char s[200050];
int dp[200050][30];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%s",s+1);
		int len=strlen(s+1);
		for(int i=0;i<=len;i++){
			for(int j=0;j<=26;j++)dp[i][j]=1e9;
		}
		dp[0][0]=0;
		for(int i=1;i<=len;i++){
			for(int j=0;j<=26;j++){
				dp[i][j]=dp[i-1][j]+1;
			}
			dp[i][0]=min(dp[i-1][s[i]-'a'+1],dp[i-1][0]+1);
			dp[i][s[i]-'a'+1]=min(dp[i-1][0],dp[i-1][s[i]-'a'+1]+1);
//			cout<<dp[i][0]<<endl;
		}
		printf("%d\n",dp[len][0]);
	}
	return 0;
}