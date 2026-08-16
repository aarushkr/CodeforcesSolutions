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
        int a;
        int trash;
        loop(i, n) {
            if(i == 0) {
                cin >> a;
            }
            else {
                cin >> trash;
            }
        }
        if (a != 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}