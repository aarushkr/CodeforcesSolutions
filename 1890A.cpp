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
        map<int, int> mp;
        loop(i, n) {
            int in;
            cin >> in;
            mp[in]++;
        }
        if (mp.size() == 1) {
            cout << "YES\n";
        }
        else if (mp.size() > 2) {
            cout << "NO\n";
        }
        else {
            int n1 = -1;
            int n2 = -1;
            for (auto x : mp) {
                if (n1 == -1) {
                    n1 = x.second;
                }
                else {
                    n2 = x.second;
                }
            }
            if (abs(n1 - n2) >= 2) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        }
    }
}