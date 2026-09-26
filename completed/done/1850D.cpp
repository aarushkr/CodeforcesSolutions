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
            cin >> n >> k;
            vector<int> a(n);
            loop(i, n) {
                cin >> a[i];
            }
            sort(a.begin(), a.end());
            int l, r, maxlen;
            bool gotl = false;
            maxlen = 0;
            for (int i = 0; i < n-1; i++) {
                if(!gotl) {
                    if (abs(a[i] - a[i+1]) <= k) {
                        l = i;
                        r = i+1;
                        gotl = true;
                    }
                }
                else {
                   if (abs(a[i] - a[i+1]) <= k) {
                    r = i+1;
                   }
                   else {
                    gotl = false;
                    maxlen = max(maxlen, (r - l + 1));
                   }
                }
            }
            if(gotl) {
                maxlen = max(maxlen, (r - l + 1));
            }
            if (n == 1) {
                cout << 0 << '\n';
            }
            else if (maxlen == 0) {
                cout << n-1 << '\n';
            }
            else {
                cout << (n - maxlen) << '\n';
            }
        }
    }