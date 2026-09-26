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
        ll n;
        cin >> n;
        ll ans = 0;
        for (int b = 1; b <= n; b++) {
            ans += (ll)(n/b) * (n/b);
        }
        cout << ans << '\n';
    }
}