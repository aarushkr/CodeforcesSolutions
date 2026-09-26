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
        int n = s.size();
        int count = 0;
        loop(i, n) {
            if(s[i] == '4') {
                count++;
            }
        }
        s.erase(remove(s.begin(), s.end(), '4'), s.end());
        int right_odd = 0;
        for (char c : s) {
            if ((c == '1') || (c == '3')) {
                right_odd++;
            }
        }
        int left_even = 0;
        int best = right_odd;
        for (char c : s) {
            if (c == '2') {
                left_even++;
            }
            else {
                right_odd--;
            }
            best = max(best, (right_odd + left_even));
        }
        cout << (n - best) << '\n';
    }
}