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
        vector<int> a(n);
        loop(i, n) {
            cin >> a[i];
        }
        int p;
        cin >> p;
        vector<int> b(n+2);
        b[0] = 1;
        b[n+1] = 1;
        int x = a[p-1];
        loop(i, n) {
            if (a[i] == x) {
                b[i+1] = 1;
            }
            else {
                b[i+1] = 0;
            }
        }
        int l = 0;
        int r = 0;
        loop(i, n+1) {
            if ((i < p) && (b[i] != b[i+1])) {
                l++;
            }
            else if ((i >= p) && (b[i] != b[i+1])) {
                r++;
            }
        }
        cout << max(l, r) << '\n';
    }
    return 0;
}