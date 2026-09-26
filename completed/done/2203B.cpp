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
        ll x;
        cin >> x;
        ll n = x;
        vector<int> digits;
        ll sum = 0;
        int len = 0;
        while(n > 0) {
            digits.push_back(n % 10);
            sum += n % 10;
            n /= 10;
            len++;
        }
        digits[len-1]--;
        sort(digits.begin(), digits.end());
        if (sum < 10) {
            cout << 0 << '\n';
        }
        else {
            int ans = 0;
            while(sum >= 10) {
                ans++;
                sum -= digits[len - ans];
            }
            cout << ans << '\n';
        }
    }
    return 0;
}