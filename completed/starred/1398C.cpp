#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v(n);
        map <ll, ll> freq;
        freq[0] = 1;
        loop(i, n) {
            if (i == 0) {
                v[i] = s[i] - '0';
                freq[v[i] - (i+1)]++;
                continue;
            }
            v[i] = v[i-1] + (s[i] - '0'); 
            freq[v[i] - (i+1)]++;
        }
        ll ans = 0;
        for (auto &[num, frequency] : freq) {
            if (frequency > 1) {
                ans += (ll)((frequency) * (frequency - 1)) / 2;
            }
        }
        cout << ans << '\n';
    }
}