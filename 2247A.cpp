#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll sum = 0;
        loop(i, n) {
            int input;
            cin >> input;
            sum += input;
        }
        if(n == 1) {
            cout << "NO\n";
            continue;
        }

        if (sum == 0) {
            cout << "YES\n";
            continue;
        }
        if (abs(sum) < 4) {
            cout << "NO\n";
            continue;
        }
        if (abs(sum) % 4 ==  0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}