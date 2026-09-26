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
        int len = s.size();
        int oneCount = 0;
        loop(i, len - 1) {
            if (s[i] == s[i+1]) {
                oneCount++;
            }
        }
        if (oneCount > 2) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}