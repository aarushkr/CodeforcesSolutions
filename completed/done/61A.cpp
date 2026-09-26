#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for (int i = 0; i < n; i++) {
        cout << (s1[i] != s2[i]);
    }
}