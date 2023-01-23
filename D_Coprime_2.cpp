#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long long unsigned int ULL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;

#define rep(i, a, b) for (int i = a; i <= b; i++)
#define E cout<<endl;
#define GET_INOUT_FAST \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);

// ==========================================
// START PROGRAM


void solve() {

  int N, M;
  cin >> N >> M;

  vector<int> v(N,0);
  for (int i = 0; i < N; i++)
    cin >> v[i];

  vector<int> ans;
  for (int m = 1; m <= M; m++)
  {
    for (int i = 0; i < N; i++) 
    {
      // int gd = gcd(v[i], m);
      // cerr << gd << endl;

      if (gcd(v[i],m) == 1){
        ans.push_back(m); 
      }
    }
  }

  cerr << gcd(5,7);


  auto ip = unique(ans.begin(), ans.end());
  ans.resize(distance(ans.begin(), ip));

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) 
  {
    cout << ans[i] << endl;
  }

}


int main() {
  
  GET_INOUT_FAST

  LL T = 1;
  // cin >> T;

  while(T--) {
    solve();
  }

  return 0;
}