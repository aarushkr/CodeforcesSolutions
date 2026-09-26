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
        string s;
        cin >> n >> s;
        int c = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                c++;
            }
        }
        if (c == 1) {
            cout << 2 << '\n';
        }
        else {
            cout << 1 << '\n';
        }
    }
}