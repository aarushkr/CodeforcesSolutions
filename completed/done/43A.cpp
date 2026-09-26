#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t{};
    cin >> t;
    map<string, int> mp;

    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        mp[str]++;
    }

    string winner;
    int mx{0};
    for (auto x : mp) {
        if (x.second > mx) {
            mx = x.second;
            winner = x.first;
        }
    }
    cout << winner << '\n';
}