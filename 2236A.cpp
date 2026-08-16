#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
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
        vector<int> h(n);
        loop(i, 0, n) {
            cin >> h[i];
        }
        auto [mn, mx] = minmax_element(h.begin(), h.end());
        cout << ((*mx + 1) - *mn) << '\n';
    }
}