#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int visitable_shops(int target, vector<int>& v) {
    int l = 0;
    int r = v.size() - 1;
    int m;
    while(l <= r) {
        m = l + ((r-l) / 2);
        if (v[m] <= target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return l;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> x(n);
    loop(i, n) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    vector<int> m(q);
    loop (i, q) {
        cin >> m[i];
    }
    loop (i, q) {
        cout << visitable_shops(m[i], x) << '\n';
    }
}