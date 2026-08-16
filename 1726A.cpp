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
            vector<int> a(n);
            loop(i, n) {
                cin >> a[i];
            }
            if (n == 1) {
                cout << 0 << '\n';
                continue;
            }
            int ans = 0;
            for(int i = 0; i < n; i++) {
                if (i == 0) {
                    ans = a[i] - a[i+1];
                }
                else if (i == n-1) {
                    ans = max(ans, a[n-1] - a[0]);
                }
                else {
                    ans = max(ans, (a[i] - a[i+1]));
                }
            }
            for (int i = 1; i < n; i++) {
                ans = max(ans, (a[i] - a[0]));
            }
            loop(i, n-1) {
                ans = max(ans, (a[n-1] - a[i]));
            }
            cout << ans << '\n';
        }
        return 0;
    }