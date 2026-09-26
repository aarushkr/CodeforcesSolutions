#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> query(n+1);
    loop(i, n) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    loop (i, q) {
        int l, r;
        cin >> l >> r;
        query[l-1]++;
        query[r]--;
    }

    loop(i, n+1) {
        if (i == 0) {
            continue;
        }
        query[i] += query[i-1] ;
    }
    sort(query.begin(), query.end() -  1);

    ll ans = 0;
    loop(i, n) {
        ans += (ll)query[i]*arr[i];
    }
    cout << ans << '\n';
}