#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n{};
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-1 + i; j++) {
            if (j >= n-1 - i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= n-1 + i; j++) {
            if (j >= n-1 - i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}