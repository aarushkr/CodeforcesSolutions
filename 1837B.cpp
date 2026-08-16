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
            int curr = 1;
            int maxlen = 0;
            for (int i = 0; i < n-1; i++) {
                if(s[i] == s[i+1]) {
                    curr++;
                }
                else {
                    curr = 1;
                }
                maxlen = max(maxlen, curr);
            }
            maxlen = max(maxlen, curr);
            cout << (maxlen+1) << '\n';
        }
    }