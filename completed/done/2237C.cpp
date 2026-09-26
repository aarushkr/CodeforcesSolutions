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
        ll n;
        cin >> n;
        vector<ll> a(n);
        loop (i, n) {
            cin >> a[i];
        }
        loop(i, n-1) {
            if (a[i+1] < a[i]) {
                ll tmp = a[i] + a[i+1];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
        cout << a[n-1] << '\n';
    }
}