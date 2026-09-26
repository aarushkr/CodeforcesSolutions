#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t{};
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() <= 10)
            cout << s;
        else 
            cout << s.front() << (s.length() - 2) << s.back();
        cout << '\n'; 
    }
}
