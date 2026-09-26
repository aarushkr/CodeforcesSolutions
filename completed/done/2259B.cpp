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
        vector<int> a(n);
        loop(i, n) {
            cin >> a[i];
        }
        int Odds = 0;
        int grp0s = 0;
        int grp2s = 0;

        loop(i, n) {
            if(a[i]%2 == 1) {
                Odds++;
            }
            else {
                a[i] %= 4;
                if (a[i] == 0) {
                    grp0s++;
                }
                else {
                    grp2s++;
                }
            }
        }
        cout << max({Odds, grp0s, grp2s}) << '\n';
    }
    return 0;
}