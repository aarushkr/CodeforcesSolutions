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
            int sum = 0;
            loop(i, n-1) {
                int in;
                cin >> in;
                sum += in;
            }
            cout << (-sum) << '\n';
        }
    }