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
        vector<int> b(n);
        loop(i, n) {
            cin >> a[i];
        }
        loop(i, n) {
            cin >> b[i];
        }
        int count = 0;
        loop(i, n) {
            loop(j, n) {
                if (b[j] == -1) {
                    if (j == n-1) {
                        count = -1;
                    }
                    continue;
                }
                if(b[j] >= a[i]) {
                    a[i] = b[j];
                    b[j] = -1;
                    break;
                }
                if (j == n-1) {
                    count = -1;
                }
            }
        }
        if (count == -1) {
            cout << count << '\n';
            continue;
        }
        for (int i = n-1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j+1]) {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    count++;
                }
            }
        }
        cout << count << '\n';
    }
}