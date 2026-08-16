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
        string s;
        cin >> n >> k >> s;
        map<char, int> mp;
        for(char c : s) {
            mp[c]++;
        }
        int Odds = 0;
        for (auto it : mp) {
            if(it.second % 2) {
                Odds++;
            }
        }
        if (Odds > (k+1)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}