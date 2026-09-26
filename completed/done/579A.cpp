#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x{};
    cin >> x;
    int ans{0};

    while (x) {
        if (x % 2 == 1) {
            ans++;
            x--;
        }
        x /= 2;
    }
    cout << ans;
}