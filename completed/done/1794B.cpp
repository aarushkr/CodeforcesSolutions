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
            for (int i = 0; i < n-1; i++) {
                if (i == 0) {
                    if (a[i] == 1) {
                        a[i]++;
                    }
                }
                else if (a[i] == 1) {
                    a[i]++;
                    if(a[i]%a[i-1] == 0) {
                        a[i]++;
                    }
                }
                if (a[i+1]%a[i] == 0) {
                    a[i+1]++;
                }
            }
            for (int x : a) {
                cout << x << ' ';
            }
            cout << '\n';
        }
        return 0;
    }