#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c, t;
    cin >> t;
    set<char> s;
    while (true) {
        cin >> c;
        if (c == '}') 
            break;
        if (c != ',') 
            s.insert(c);
    }
    cout << s.size();
}