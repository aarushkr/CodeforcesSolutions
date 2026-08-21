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
        vector<int> b(m);
        loop(i, n) {
            cin >> a[i];
        }
        loop(i, m) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool possible = true;
        if (n >= (2*m)) {
            loop(i, m) {
                if (a[i] > b[i]) {
                    possible = false;
                    break;
                }
                if (b[i] > a[n-m+i]) {
                    possible = false;
                    break;
                }
            }
        }
        else {
            possible = false;
        }
        if(!possible) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}