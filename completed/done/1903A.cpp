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
        if (k >= 2) {
            cout << "YES\n";
        }
        else {
            bool increasing = true;
            loop(i, n-1) {
                if (a[i] > a[i+1]) {
                    increasing = false;
                    break;
                }
            }
            if (increasing) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
}