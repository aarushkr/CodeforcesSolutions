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
        int n; string s;
        cin >> n >> s;
        ll ans = 0;
        vector<bool> seen(26, false);

        loop(i, n) {
            int x = s[i] - 'a';
            if(!seen[x]) {
                ans += n - i;
                seen[x] = true;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}