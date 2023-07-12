// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> b(n), ss(n);
//     for(int i=0; i<n; i++) {
//         cin >> b[i];
//     }
//     for(int i=0; i<n; i++) {
//         cin >> ss[i];
//     }
    
//     vector<pair<int,int>> boss(n);
//     for(int i=0; i<n; i++) {
//         boss[i] = make_pair(b[i], ss[i]);
//     }
    
//     sort(boss.begin(), boss.end());
    
//     vector<int> rsboss;
//     int ans = 0;
    
//     for(auto x : boss) {
//         int boss = x.first, soldier = x.second;
//         rsboss.push_back(soldier);
//         sort(rsboss.rbegin(), rsboss.rend());
//         if(rsboss.size() > 2) {
//             rsboss.pop_back();
//         }
//         if(count(rsboss.begin(), rsboss.end(), soldier) > 2) {
//             rsboss.erase(remove(rsboss.begin(), rsboss.end(), soldier), rsboss.end());
//         }
//         ans = max(ans, (int)rsboss.size());
//     }
    
//     cout << ans << endl;
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <unordered_set>
#include <cmath>
#include <numeric>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
using namespace std;

vector<int> prime_factorization(int n) {
    vector<int> factors;
    int p = 2;
    while (p * p <= n) {
        if (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
        else {
            p += 1;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

template<typename T>
void subsets(vector<T> s, vector<vector<T>>& res) {
    int n = s.size();
    for(int i=1; i<(1<<n); i++) {
        vector<T> v;
        for(int j=0; j<n; j++) {
            if(i & (1<<j)) {
                v.push_back(s[j]);
            }
        }
        res.push_back(v);
    }
}

bool isprime(int n) {
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

vector<int> primourite_numbers(int y) {
    vector<int> factors = prime_factorization(y);
    vector<vector<int>> subsets_sum;
    subsets(factors, subsets_sum);
    unordered_set<int> res;
    for(auto subset : subsets_sum) {
        int subset_sum = accumulate(subset.begin(), subset.end(), 0);
        if(isprime(subset_sum)) {
            res.insert(subset_sum);
        }
    }
    return vector<int>(res.begin(), res.end());
}

vector<int> visitable_islands(int y, vector<int> distinctiveness_scores, vector<int> islands) {
    vector<int> allowed_scores = primourite_numbers(y);
    vector<int> res;
    for(int island : islands) {
        if(find(allowed_scores.begin(), allowed_scores.end(), island) != allowed_scores.end()) {
            res.push_back(island);
        }
    }
    return res;
}

int main() {
    int y = 12;
    vector<int> distinctiveness_scores = {2, 3, 5, 7};
    vector<int> islands = {3, 7, 8, 12};
    vector<int> res = visitable_islands(y, distinctiveness_scores, islands);
    for(int island : res) {
        cout << island << " ";
    }
    cout << endl;
    return 0;
}

