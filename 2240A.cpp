#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int power(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t) {
        int ans{};
        int n,k;
        cin >> n >> k;
        vector<int> v(k);
        int i = 0;
        int cost = power(2, i);
        while(n >= cost) {
            cost = power(2, i);
            for (int i = 0; i < k; i++) {
                if (n < cost) 
                    break;
                ans++;
                n -= cost;
            }
            i++;
        }
        cout << ans << '\n';
        t--;
    }
}