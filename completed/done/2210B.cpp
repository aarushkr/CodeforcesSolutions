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
        vector<int> p(n);
        loop(i, n) {
            cin >> p[i];
        }
        int ans = 0;
        loop(i, n) {
            if (p[i] <= (i+1)) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}