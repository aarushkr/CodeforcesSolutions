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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        loop(i, n) {
            cin >> a[i];
        }
        vector<int> freq(m + 1, 0);
        vector<int> get(m+2, 0);
        loop(i, n) {
            freq[a[i]]++;
        }
        for (int x = m; x >= 1; x--) {
            get[x] = get[x+1] + freq[x];
        }

        int ans = 0;

        for (int x = m; x >= 1; x--) {
            int current = get[x];
            if (2 * x <= m) {
                current += freq[2 * x];
            }
            ans = max(ans, current);
        }
        cout << ans << '\n';
    }
    return 0;
}