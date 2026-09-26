#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    int num_of_0 = 0;
    int num_of_5 = 0;
    loop(i, n) {
        cin >> a[i];
        if (a[i] == 0) {
            num_of_0++;
        }
        else {
            num_of_5++;
        }
    }
    int ans;
    if (num_of_0 == 0) {
        cout << "-1\n";
    }
    else if (num_of_5 < 9) {
        cout << "0\n";
    }
    else {
        num_of_5 /= 9;
        num_of_5 *= 9;
        string ans = "";
        loop(i, num_of_5) {
            ans += '5';
        }
        loop(i, num_of_0) {
            ans += '0';
        }
        cout << ans << '\n';
    }
    return 0;
}