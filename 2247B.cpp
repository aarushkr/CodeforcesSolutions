#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, k, m;
        cin >> n >> k >> m;
        if (k > m) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        loop(i, n) {
            if ((i % k) == 0) {
                cout << m-(k-1) << ' ';
            }
            else {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }
}