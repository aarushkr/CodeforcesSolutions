#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, col;
    cin >> row >> col;

    bool isColour = false;
    for (int i = 0; i < row * col; i++) {
        char c;
        cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y') {
            isColour = true;
        }
    }
    if (isColour) 
        cout << "#Color";
    else
        cout << "#Black&White";
}