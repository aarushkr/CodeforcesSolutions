#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int mostFreq(vector<int>& a, int& frequency) {
    unordered_map<int, int> freq;

    for (int x : a)
        freq[x]++;

    int ans = a[0];

    for (auto [x, f] : freq) {
        if (f > freq[ans])
            ans = x;
    }

    frequency = freq[ans];
    return ans;
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
        int frequency = 0;
        int freqint = mostFreq(a, frequency);
        int O = n - frequency;
        ll sum = 0;
        for (int x : a) {
            if (x != freqint) {
                sum += (ll)x;
            }
        }
        ll ans = sum + (ll)freqint * min(frequency, O + 2);
        cout << ans << '\n';
    }
    return 0;
}