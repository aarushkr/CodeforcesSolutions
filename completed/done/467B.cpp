#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    int ans{};
    for (int i = 0; i < m+1 ; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++) {
        if (__builtin_popcount(v[i] ^ v[m]) <= k) 
            ans++;
    }
    cout << ans;
}