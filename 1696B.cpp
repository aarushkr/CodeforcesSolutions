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
            vector<int> a(n);
            loop(i, n) {
                cin >> a[i];
            }
            bool non0started = false;
            int ans = 0;
            loop(i, n) {
                if(!non0started && (a[i] != 0)) {
                    non0started = true;
                    ans++;
                }
                else if (a[i] == 0) {
                    non0started = false;
                }
            }
            cout << min(ans, 2) << '\n';
        }
        return 0;
    }