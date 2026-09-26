#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t) {
        int n;
        cin >> n;
        vector<int> a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }
        loop(i, 0, n) {
            loop(j, i+1, n) {
                if (a[i] >= a[j]) {
                    continue;
                }
                a[j] = a[i];
            }
        }
        int sum = 0;
        loop(i, 0, n) {
            sum += a[i];
        }
        cout << sum << '\n';
        t--;
    }
}