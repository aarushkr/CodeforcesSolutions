#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

const int constant = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll free_cells = (n*m) - ((n-r+1) * (m-c+1));
        ll result = 1;
        ll a = 2;
        while(free_cells) {
            if(free_cells%2) {
                result = (result*a) % constant;
            }
            a = (a * a) % constant;
            free_cells /= 2;
        }
        cout << (result % constant) << '\n';
    }
}