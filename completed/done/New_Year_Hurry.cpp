#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int c{1};
    int time {240 - k};
    while (time - 5 * c >= 0 && c <= n) {
        time -= 5 * c;
        c++;
    }
    cout << c-1;
}