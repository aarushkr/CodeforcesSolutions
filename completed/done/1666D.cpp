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
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> counts1;
        map<char, int> counts2;
        for (char c : s1) {
            counts1[c]++;
        }
        for (char c : s2) {
            counts2[c]++;
        }
        map<char, int> dlt;
        bool impossible = false;
        for (auto it : counts1) {
            char c = it.first;
            if (counts2[c] > it.second) {
                impossible = true;
                break;
            }
            else {
                dlt[c] = it.second - counts2[c];
            }
        }
        if(impossible) {
            cout << "NO\n";
            continue;
        }
        string result = "";
        for (char c : s1) {
            if (dlt[c] > 0) {
                dlt[c]--;
            }
            else {
                result += c;
            }
        }
        if (result == s2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}