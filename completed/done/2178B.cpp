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
        int count = 0;
        int n = s.size();
        if (s[0] != 's') {
            count++;
            s[0] = 's';
        }
        if (s[n-1] != 's') {
            count ++;
            s[n-1] = 's';
        }
        for (int i = 1; i < (n-1); i++) {
            if ((s[i] == 'u') && (s[i+1] != 's')){
                s[i+1] = 's';
                count++;
            }
        }
        cout << count << '\n';
    }
}