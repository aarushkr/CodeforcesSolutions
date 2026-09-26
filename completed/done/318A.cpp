#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Tn(ll a,ll n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    if (n % 2 == 1) {
        if (k <= (n/2) + 1) {
            cout << Tn(1, k);
        }
        else {
            cout << Tn(2, (k - (n/2 + 1)));
        }
    }
    else {
        if (k <= n/2) {
            cout << Tn(1, k);
        }
        else {
            cout << Tn(2, k - n/2);
        }
    }
}

ll Tn(ll a, ll n) {
    return (a + (n - 1) * 2);
}