#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    loop(i, n) {
        cin >> h[i];
    }
    vector<int> prefix(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            prefix[i] = h[i];
            continue;
        }
        prefix[i] = prefix[i - 1] + h[i];
    }
    int min_index = 0;
    int min_sum = 0;
    for (int i = -1; (i+k) < n; i++) {
        if (i == -1) {
            min_sum = prefix[k+i];
            continue;
        }
        if ((prefix[k+i] - prefix[i]) < min_sum) {
            min_index = i+1;
            min_sum = prefix[k+i] - prefix[i];
        }
    }
    cout << min_index+1 << '\n';
}