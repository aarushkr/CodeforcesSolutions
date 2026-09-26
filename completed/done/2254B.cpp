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
        string s;
        cin >> s;
        int len = 0;
        loop(i, n-1) {
            if (s[i] != s[i+1]) {
                len++;
            }
        }
        len++;
        int subtract = 0;
        int index = 0;
        loop(i, n) {
            if (i == 0) {
                continue;
            }
            if (i == n-1) {
                continue;
            }
            if ((s[i] != s[i+1]) && (s[i] != s[i-1])) {
                if (s[i+1] == s[i-1]) {
                    subtract = 2;
                    index = i;
                }
                else if(subtract != 2) {
                    subtract = 1;
                    index = i;
                }
            }
        }
        cout << (len - subtract) << '\n';
    }
}