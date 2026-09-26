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
        string s;
        cin >> s;

        string s1 = "";
        for (int i = 0; i < n; i+=2) {
            s1 += s[i];
        }
        string s2 = "";
        for (int i = 1; i < n; i+=2) {
            s2 += s[i];
        }

        bool valid = true;

        //for s1
        int len1 = s1.size();
        //first checking validity
        for (int i = 0; i < len1-1; i++) {
            if (s1[i] == '?' || s1[i+1] == '?') {
                continue;
            }
            if (s1[i] == s1[i+1]) {
                valid = false;
            }
        }
        if(!valid) {
            cout << 0 << '\n';
            continue;
        }

        int m1 = 0;

        for (int first = 0; first <= 1; first++) {
            bool ok = true;

            for (int i = 0; i < len1; i++) {
                int expected = first ^ (i % 2);

                if (s1[i] != '?' && s1[i] - '0' != expected) {
                    ok = false;
                    break;
                }
            }

            if (ok) m1++;
        }

        int len2 = s2.size();

        //first checking validity
        valid = true;
        for (int i = 0; i < len2-1; i++) {
            if (s2[i] == '?' || s2[i+1] == '?') {
                continue;
            }
            if (s2[i] == s2[i+1]) {
                valid = false;
            }
        }
        if(!valid) {
            cout << 0 << '\n';
            continue;
        }

        int m2 = 0;

        for (int first = 0; first <= 1; first++) {
            bool ok = true;

            for (int i = 0; i < len2; i++) {
                int expected = first ^ (i % 2);

                if (s2[i] != '?' && s2[i] - '0' != expected) {
                    ok = false;
                    break;
                }
            }

            if (ok) m2++;
        }
        cout << (m1*m2) << '\n';
    }
    return 0;
}