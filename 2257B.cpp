#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int strength(int n, vector<int>& a) {
    int a_strength = 0;
    for (int i = 0; i < n; i++) {
        if (i == n-1) {
            a_strength += a[i];
        }
        else {
            a_strength += a[i] - a[i+1] + 1;
        }
    }
    return a_strength;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        loop(i, n) {
            cin >> a[i];
        }
        loop(i, m) {
            cin >> b[i];
        }
        if (strength(n, a) >= strength(m, b)) {
            cout << 1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }

    }
    return 0;
}