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
        ll n, k, x;
        cin >> n >> k >> x;
        ll min_sum = k * (k+1) / 2;
        ll max_sum = k * n - k * (k-1) / 2;
        if ((x >= min_sum) && (x <= max_sum)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}