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
        loop (i, n) {
            cin >> a[i];
        }
        int count = 0;
        vector<int> ans;
        for (int i = (n-1); i >= 0; i--) {
            if ((a[i] < 0) && (count%2)) {
                count++;
                ans.push_back(i+1);
            }
            else if ((a[i] > 0) && (count%2 == 0)) {
                count ++;
                ans.push_back(i+1);
            }
        }
        cout << count << '\n';
        for (int x : ans) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}