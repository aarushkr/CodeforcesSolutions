#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

bool TokensEqual(int a, int b, int c) {
    if (a == b) {
        return true;
    }
    if (b == c) {
        return true;
    }
    if (a == c) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0;
        while(!TokensEqual(a, b, c)) {
            count++;
            if ((a > b) && (a > c)) {
                if (b < c) {
                    b++;
                    a--;
                }
                else {
                    c++;
                    a--;
                }
            }
            else if ((b > a) && (b > c)) {
                if (c < a) {
                    c++;
                    b--;
                }
                else {
                    a++;
                    b--;
                }
            }
            else {
                if (b < a) {
                    b++;
                    c--;
                }
                else {
                    a++;
                    c--;
                }
            }
        }
        cout << count << '\n';
    }
}