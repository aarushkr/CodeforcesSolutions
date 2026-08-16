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
        int MAX;
        vector<int> w(n);
        loop(i, n) {
            cin >> w[i];
        }
        if (n%2) {
            cout << "NO\n";
            continue;
        }
        bool possible = true;
        int k_upper;
        int k_lower;
        for (int i = 0; i <= n-2; i+= 2) {
            if (((w[i] - w[i+1]) <= 1)) {
                possible = false;
                break;
            }
            if (i == 0){
                k_upper = w[i]-1;
                k_lower = w[i+1] + 1;
                continue;
            }
            else {
                possible = true;
            }
            if (max(k_lower, (w[i+1] + 1)) <= min(k_upper, w[i]-1)) {
                k_upper = min(k_upper, (w[i]-1));
                k_lower = max(k_lower, (w[i+1] + 1));
            }
            else {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}