#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    loop(i, n) {
        cin >> v[i];
    }
    vector<int> sv = v;
    sort(sv.begin(), sv.end());

    vector<ll> prefix_v(n), prefix_sv(n);
    loop(i, n) {
        if (i == 0) {
            prefix_sv[i] = sv[i];
            prefix_v[i] = v[i];
            continue;
        }
        prefix_sv[i] = prefix_sv[i-1] + sv[i];
        prefix_v[i] = prefix_v[i-1] + v[i];
    }

    int t;
    cin >> t;
    while(t--) {
        int type, l, r;
        cin >> type >> l >> r;
        ll ans = 0;
        switch (type)
        {
        case 1:
            if (l == 1) {
                ans = prefix_v[r-1];
            }
            else {
                ans = prefix_v[r-1] - prefix_v[l-2];
            }
            break;
        case 2:
            if (l == 1) {
                ans = prefix_sv[r-1];
            }
            else {
                ans = prefix_sv[r-1] - prefix_sv[l-2];
            }
            break;
        
        default:
            break;
        }
        cout << ans << '\n';
    }
}