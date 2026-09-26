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
        vector<int> a(3);
        loop(i, 3) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << (n - a[0]) << '\n';
    }
    return 0;
}