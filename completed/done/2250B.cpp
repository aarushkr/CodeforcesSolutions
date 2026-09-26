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
        int r = n - k;
        if (r < 2) {
            cout << "-1\n";
        }
        else {
            //ciel is a+b-1/b
            int r0 = (r + 1) / 2;
            int r1 = r / 2;
            int c0 = (n + 1) / 2;
            int c1 = n / 2;
            vector<string> v0 (r0);
            loop(i, r0) {
                v0[i] = "0";
            }
            vector<string> v1 (r1);
            loop(i, r1) {
                v1[i] = "1";
            }
            c0 -= r0;
            loop(i, c0) {
                v0[r0-1] += '0';
            }
            c1 -= r1;
            loop(i, c1) {
                v1[r1-1] += '1';
            }
            string ans = "";
            int i0 = 0;
            int i1 = 0;
            loop(i, r0 + r1) {
                if(i%2) {
                    ans += v1[i1];
                    i1++;
                }
                else {
                    ans += v0[i0];
                    i0++;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}