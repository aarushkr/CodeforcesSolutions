#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t{};
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        bool check = false;
        for (int i = 1; i <= x; i++) {
            if (abs(((double) x/i) - (double)y) < 1e-9) {
                check = true;
            }
        }
        if (check) {
            cout << "YES";
        }
        else 
            cout << "NO";
        cout << '\n';
    }

}