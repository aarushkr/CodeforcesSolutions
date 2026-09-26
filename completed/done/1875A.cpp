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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<int> x(n);
        loop(i, n) {
            cin >> x[i];
        }
        loop(i, n) {
            b += min((ll)x[i], a-1);
        }
        cout << b << '\n';
    }
}