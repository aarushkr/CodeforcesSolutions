#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int last_Term = (3*n - 2) / 2; // n is guaranteed to be even
        if (last_Term % 2 == 0) {
            cout << "NO\n";
            continue;
        }
        else {
            cout << "YES\n";
        }
        for (int i = 0, j = 2; i < n/2; i++, j += 2 ) {
            cout << j << ' ';
        }
        for (int i = 0, j = 1; i < n/2 - 1; i++, j += 2) {
            cout << j << ' ';
        }
        cout << last_Term << '\n';
    }
}