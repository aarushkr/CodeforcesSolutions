#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;

    for (char c : s) {
        mp[c]++;
    }

    ll len = mp.size();

    if (len % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}