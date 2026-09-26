#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int len = s.size();
    vector<int> count_arr(len-1);
    int count = 0;

    for (int i = 1; i < len; i++) {
        if (s[i-1] == s[i]) {
            count++;
        }
        count_arr[i-1] = count;
    }

    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        if (l == 1) {
            cout << count_arr[r-2] << '\n';
            continue;
        }
        cout << (count_arr[r-2] - count_arr[l-2]) << '\n';
    }
}