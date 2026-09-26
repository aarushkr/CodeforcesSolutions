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
            if (n%2 == 0) {
                cout << "2\n1 " << n << "\n1 " << n << '\n';
            }
            else {
                cout << "4\n1 " << n-1 << "\n1 " << n-1 << '\n' << n-1 << ' ' << n << '\n' << n-1 << ' ' << n << '\n';
            }
        }
    }