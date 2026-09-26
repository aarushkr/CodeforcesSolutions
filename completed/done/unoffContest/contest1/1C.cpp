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
        string s;
        cin >> s;
        char c = s[0];
        int n = s[1] - '0';
        for (int i = 1; i <= 8; i++) {
            if(i != n) {
                cout << c << i << '\n';
            }
        }

        char strt = 'a';
        loop(i, 8) {
            if(strt != c) {
                cout << strt << n << '\n';
            }
            strt++;
        }
    }
    return 0;
}