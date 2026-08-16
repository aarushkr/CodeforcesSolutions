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
            if(n%2 || n < 4) {
                cout << -1 << '\n';
            }
            else if (n == 4) {
                cout << 1 << ' ' << 1 << '\n';
            }
            else {
                cout << ((n+5)/6) << ' ' << (n/4) << '\n';
            }
        }
        return 0;
    }