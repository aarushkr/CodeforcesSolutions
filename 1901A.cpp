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
        int n, x;
        cin >> n >> x;
        vector<int> a(n+2);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int max_diff = 0;
        a[0] = 0;
        a[n+1] = x;
        for (int i = 1; i <= n; i++) {
            max_diff = max(max_diff, (a[i] - a[i-1]));
        }
        max_diff = max(max_diff, (2*(a[n+1] - a[n])));
        cout << max_diff << '\n';
    }
}