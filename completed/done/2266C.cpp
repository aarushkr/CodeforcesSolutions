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
        int n; string s;
        cin >> n >> s;

        if(s[0] == '1') {
            int ans = 0;
            loop(i, n) {
                if(s[i] == '0') {
                    ans++;
                }
            }
            cout << ans << '\n';
            continue;
        }

        vector<int> ones(n+2, 0);
        vector<int> zeroes(n+2, 0);

        loop(i, n) {
            if(s[i] == '0') {
                zeroes[i+1] = zeroes[i] + 1;
                ones[i+1] = ones[i];
            }
            else {
                ones[i+1] = ones[i] + 1;
                zeroes[i+1] = zeroes[i]; 
            }
        }

        ones[n+1] = ones[n];
        zeroes[n+1] = zeroes[n];

        int cost = INT32_MAX;
        for(int i = 1; i <= n+1; i++) {
            cost = min(cost, (ones[i-1]) + (zeroes[n+1] - zeroes[i-1]));
        }
        cost = min(cost, ones[n+1]);

        cout << cost << '\n';
    }
    return 0;
}