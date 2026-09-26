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
            int count = 0;
            for (int i = n-1; i > 0; i--) {
                if (a[i] == 0) {
                    count = -1;
                    break;
                }
                int k = std::bit_width(static_cast<unsigned>(a[i-1] / a[i]));
                count += k;
                a[i-1] /= (1LL << k);
                if ((i != 1) && (a[i-1] == 0)) {
                    count = -1;
                    break;
                }
            }
            cout << count << '\n';
        }
        return 0;
    }