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
        int k;
        cin >> k;
        bool ans = false;
        bool first_twoer = false;
        loop(i, k) {
            int n;
            cin >> n;
            if (n > 2) {
                ans = true;
            }
            if (first_twoer && n > 1) {
                ans = true;
            }
            if (n > 1) {
                first_twoer = true;
                continue;
            }
        }
        if(ans) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}