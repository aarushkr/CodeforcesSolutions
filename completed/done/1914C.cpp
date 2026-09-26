#include <bits/stdc++.h>
#define loop(i, b) for(int i = 0; i < b; i++) 
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin. tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        loop(i, n) {
            cin >> a[i];
        }

        loop(i, n) {
            cin >> b[i];
        }

        int mn = min(n, k);

        int best = 0;
        int sum = 0;
        int best_b = 0;

        for (int p = 1; p <= mn; p++) {
            sum += a[p-1];
            best_b = max(best_b, b[p-1]);

            best = max(best, sum + (k - p) * best_b);
        }

        cout << best << '\n';
    }
}