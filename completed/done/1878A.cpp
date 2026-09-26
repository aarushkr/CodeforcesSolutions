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
        int n, k;
        cin >> n >> k;
        bool found = false;
        loop(i, n) {
            int in;
            cin >> in;
            if (in == k) {
                found = true;
            }
        }
        if(found) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}