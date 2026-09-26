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
        vector<int> p(n);
        loop(i, n) {
            cin >> p[i];
        }
        bool firstFound = false;
        int last;
        bool ans = true;
        loop(i, n) {
            if (p[i] == (i + 1)) {
                continue;
            }
            if(!firstFound) {
                firstFound = true;
                last = p[i];
                continue;
            }
            if (p[i] > last) {
                ans = false;
                break;
            }
            last = p[i];
        }
        if(ans) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}