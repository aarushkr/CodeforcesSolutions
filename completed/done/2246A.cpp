#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
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
        for (int i = 1, j = 2; i < n, j <= n+1; i+=2 , j+=2) {
            cout << j << ' ' << i << ' ';
        }
        cout << '\n';
    }
}