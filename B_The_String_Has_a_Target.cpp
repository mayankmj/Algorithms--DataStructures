#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> lines(n);
        for (int i = 0; i < n; i++) {
            cin >> lines[i];
        }
        for (int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            bool found = false;
            for (int j = 0; j < n && !found; j++) {
                int k = lines[j];
                if (a == 0) {
                    if (k != 0) {
                        cout << "NO\n";
                        found = true;
                    }
                } else if (k == 0) {
                    if (b * b - 4 * a * c <= 0) {
                        cout << "YES\n1\n";
                        found = true;
                    }
                } else {
                    int delta1 = k * k - 4 * a * (c - k * k / (4 * a));
                    int delta2 = k * k - 4 * a * (b - k);
                    if (delta1 < 0 && delta2 < 0) {
                        cout << "YES\n" << k << "\n";
                        found = true;
                    } else if (delta1 >= 0 && delta2 >= 0 && (k * k - 4 * a * b <= 0)) {
                        cout << "YES\n" << k << "\n";
                        found = true;
                    }
                }
            }
            if (!found) {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
