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
        string x, s;
        cin >> n >> m >> x >> s;
        bool notfound = true;
        loop(i, 6) {
            if (x.find(s) != string::npos) {
                cout << i << '\n';
                notfound = false;
                break;
            }
            else {
                x += x;
            }
        }
        if (notfound) {
            cout << -1 << '\n';
        }
    }
}