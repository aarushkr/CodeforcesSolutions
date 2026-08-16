#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t{};
    cin >> t;

    unordered_map<string, int> mp;

    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        mp[str]++;
        if (mp[str] > 1) {
            int suffix = mp[str] - 1;
            cout << str << suffix;
        }
        else {
            cout << "OK";
        }
        cout << '\n';
    }

}