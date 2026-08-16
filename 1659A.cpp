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
        int n, r, b;
        cin >> n >> r >> b;
        vector<int> B(b+1);
        while(r) {
            loop(i, 0, b+1) {
                if (r <= 0) {
                    break;
                }
                B[i]++;
                r--;
            }
        }
        loop(i, 0, b+1) {
            loop(j, 0, B[i]) {
                cout << 'R';
            }
            if (i != b) {
                cout << 'B';
            }
        }
        cout << '\n';
    }
}