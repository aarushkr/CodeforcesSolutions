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
        bool check = false;
        int len = 0;
        int maxlen = 0;
        loop(i, n) {
            char c;
            cin >> c;
            if (c == '*') {
                check = false;
            }
            if (c == '#') {
                check = true;
                len++;
            }
            if(!check)  {
                maxlen = max(maxlen, len);
                len = 0;
            } 
        }
        maxlen = max(maxlen, len);
        cout << ((maxlen + 1) / 2) << '\n';
    }
}