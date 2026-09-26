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
        int sum = 0;
        int mx;
        loop(i, 7) {
            int a;
            cin >> a;
            if(i == 0) {
                mx = a;
            }
            else {
                mx = max(mx, a);
            }

            sum -= a;
        }

        sum += 2*mx;
        cout << sum << '\n';
    }
    return 0;
}