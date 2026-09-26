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
        unordered_set <char> s;
        loop(i, n) {
            string str;
            cin >> str;
            s.insert((char)toupper(str[0]));
        }
        bool valid = true;
        loop(i, m) {
            string abbr;
            cin >> abbr;
            for (char c : abbr) {
                if (s.count(c) == 0) {
                    valid = false;
                } 
            }
        }
        if(valid) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    return 0;
}