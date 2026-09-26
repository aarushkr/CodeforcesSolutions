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
        vector<int> h(n);
        loop(i, n) {
            cin >> h[i];
        }
        ll extra = 0;
        cout << h[0] << ' ';
        int current_h = h[0];
        ll sum = h[0];
        for (int i = 1; i < n; i++) {
            sum += h[i];
            if (h[i] >= current_h) {
                extra += (h[i] - current_h);
                cout << current_h << ' ';
            }
            else if ((h[i] < current_h) && ((h[i] + extra) >= current_h)) {
                extra -= (current_h - h[i]);
                cout << current_h << ' ';
            }
            else {
                current_h = (sum) / (i+1);
                extra = sum % (i+1);
                cout << current_h << ' ';
            }
        }
        cout << '\n';
    }
}