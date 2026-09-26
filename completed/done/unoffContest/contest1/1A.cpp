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
        string s = "codefrs";
        char c;
        cin >> c;
        int l = s.size();
        bool check = false;
        loop(i, l) {
            if (c == s[i]) {
                check = true;
            }
        }
        if(check) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}