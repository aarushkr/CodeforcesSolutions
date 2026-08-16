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
        bool is3 = false;
        int count = 0;
        loop(i, n) {
            char c = s[i];
            if ((c == '.') && (i <= n-3)){
                if ((s[i+1] == '.') && (s[i+2] == '.')) {
                    is3 = true;
                    break;
                }
            }
            if (c == '.') {
                count++;
            }
        }
        if(is3) {
            cout << 2 << '\n';
        }
        else {
            cout << count << '\n';
        }
    }
}