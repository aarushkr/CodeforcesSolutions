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
            int i = 1;
            while(n%i == 0) {
                i++;
            }
            cout << i-1 << '\n';
        }
    }