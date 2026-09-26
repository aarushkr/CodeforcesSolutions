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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int farms = n / k;
        vector<pair<int, bool>> hits(farms);
        int i = 0;
        for (auto &p : hits) {
            p.first = i;
            p.second = false;
            i++;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                hits[i/k].second = true;
            }
        }
        int ans = 0;
        for (pair p : hits) {
            if(!p.second) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}