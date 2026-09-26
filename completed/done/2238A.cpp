#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int time_without = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                time_without = -1;
                break;
            }
            time_without += a[i] - b[i];
        }
        int time_reordered = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        time_reordered += c;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) 
                possible = false;
            time_reordered += a[i] - b[i];
        }
        time_reordered = possible ? time_reordered : -1;
        int ans;
        if (time_without == -1) {
            ans = time_reordered;
        }
        else {
            ans = min(time_without, time_reordered);
        }
        cout << ans << '\n';
        t--;
    }
}