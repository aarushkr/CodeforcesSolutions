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
        int a, b, x;
        cin >> a >> b >> x;
        int count = 0;
        int tmp = b;
        b = min(a, b);
        a = max(a, tmp);
        int ans = a - b;
        while(a > b) {
            a /= x;
            count++;
            int diff = abs(a - b);
            if (diff + count < 0) {
                break;
            }
            ans = min(ans, diff + count);
            tmp = b;
            b = min(a, b);
            a = max(a, tmp);
        }
        cout << ans << '\n';
    }
}