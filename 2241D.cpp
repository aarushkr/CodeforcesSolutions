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
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        loop(i, n) {
            cin >> a[i];
        }
        loop(i, n) {
            cin >> b[i];
        }
        if(a[0] > b[0]) {
            cout << "NO\n";
            continue;
        }
        for (int i = n-1; i > 0; i--) {
            if (a[i] <= b[i]) {
                a[i] = b[i];
                continue;
            }
            ll diff = a[i] - b[i];
            a[i] = b[i];
            a[i-1] += diff;
        }
        if (a[0] > b[0]) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}