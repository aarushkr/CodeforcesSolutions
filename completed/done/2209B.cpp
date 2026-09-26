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
        loop(i, n-1) {
            int small = 0;
            int huge = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    small++;
                }
                if (a[j] > a[i]) {
                    huge++;
                }
            }
            cout << max(small, huge) << ' ';
        }
        cout << 0 << '\n';
    }
    return 0;
}