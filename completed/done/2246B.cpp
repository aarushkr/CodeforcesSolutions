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
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << '\n';
        }
        else if (n == 2) {
            cout << (-1) << '\n';
        }
        else {
            cout << 1 << ' ' << 2 << ' ' << 3 << ' ';
            ll sum = 6;
            for (int i = 3; i < n; i++) {
                cout << sum << ' ';
                sum *= 2;
            }
            cout << '\n';
        }
    }
}