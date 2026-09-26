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
        vector<int> a(k);
        vector<int> b(n);
        loop(i, k) {
            cin >> a[i];
        }
        loop(i, n) {
            cin >> b[i];
        }
        
        vector<int> ans;

        for (int l = k; l >= 1; l--) {
            loop(i, n) {
                if (b[i] == l) {
                    for (int x = l; x <= k; x++) {
                        ans.push_back(i + 1);
                    }
                }
            }
        }

        int s = ans.size();
        cout << s << '\n';

        if (s != 0) {
            for (int x : ans) {
                 cout << x << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}