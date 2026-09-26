#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

ll maxFrequency(vector<int>& a) {
    unordered_map<int, int> freq;
    int ans = 0;

    for (int x : a) {
        ans = max(ans, ++freq[x]);
    }

    return (ll)ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        loop(i, n) {
            cin >> a[i];
        }
        ll maxfreq = maxFrequency(a);
        int left = n - maxfreq;
        int cost = 0;
        while(left >= maxfreq) {
            left -= maxfreq;
            cost += maxfreq + 1;
            maxfreq *= 2;
        }
        if (left != 0) {
            cost += left + 1;
        }
        cout << cost << '\n';
    }
    return 0;
}