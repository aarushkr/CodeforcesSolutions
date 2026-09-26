#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x{};
    cin >> x;

    int y{};
    cin >> y;

    int z{};
    cin >> z;

    int max{}, min{};

    if (x > y) {
        if (x > z) {
            max = x;
        }
        else {
            max = z;
        }
    }
    else {
        if (y > z) {
            max = y;
        }
        else {
            max = z;
        }
    }

    if (y < x) {
        if (y < z) {
            min = y;
        }
        else {
            min = z;
        }
    }
    else {
        if (x < z) {
            min = x;
        }
        else {
            min = z;
        }
    }

    cout << min << " " << max << '\n';
}