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

        int operation = 0;
        if(s[0] == 'u') {
            s[0] = 's';
            operation++;
        }

        if(s[len-1] == 'u') {
            s[len - 1] = 's';
            operation++;
        }

        for (int i = 1; i < len-1; i++) {
            if(s[i] == 'u' && s[i+1] == 'u') {
                s[i+1] = 's';
                operation++;
            }
        }

        cout << operation << '\n';
    }
    return 0;
}