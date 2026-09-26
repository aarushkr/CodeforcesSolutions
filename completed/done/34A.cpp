#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    loop(i, n) {
        cin >> a[i];
    }
    int best_diff = abs(a[0]- a[1]);
    int l_best = 0;
    int r_best = 1;
    for (int i = 1; i < n; i++) {
        int l = i;
        int r;
        if (i == n-1) {
            r = 0;
        }
        else {
            r = i+1;
        }
        int diff = abs(a[l] - a[r]);
        if (diff < best_diff) {
            best_diff = diff;
            l_best = l;
            r_best = r;
        }
    }
    cout << (l_best+1) << ' ' << (r_best+1);
}