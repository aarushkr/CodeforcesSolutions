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
        int digits = 0;
        while(n) {
            n/=10;
            digits++;
        }
        int ans = 1;
        loop(i, digits) {
            ans *= 10;
        }
        cout << ++ans << '\n';
    }
}