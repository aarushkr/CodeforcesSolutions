#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t{};
    cin >> t;
    vector<int> v(t);
    int sum{0};
    for (int i = 0; i < t; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    
    int c{0};
    int sum2{0};
    for (int x : v) {
        sum2 += x;
        c++;
        if (sum2 > (sum/2))
            break;
    }
    cout << c;
}