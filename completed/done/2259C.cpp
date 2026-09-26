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
        for (int i = n-1; i >= 0; i--) {
            if (a[i] == 1) {
                break;
            }
            if (a[i] == -1) {
                a[i] = 1;
                break;
            }
        }
        bool notfound = true;
        loop(i, n) {
            if (a[i] == 1) {
                notfound = false;
            }
            if (a[i] == -1) {
                if (notfound) {
                    a[i] = 1;
                    notfound = false;
                }
                else {
                    a[i] = 0;
                }
            }
        }
        for (int x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}