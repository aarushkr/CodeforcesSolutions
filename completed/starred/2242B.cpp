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
        vector<int> pref1(n, 0);
        vector<int> pref2(n, 0);
        loop(i, n) {
            int input;
            cin >> input;
            if (i == 0) {
                if (input == 1) {
                    pref1[i] = 1;
                    pref2[i] = 1;
                }
                else if (input == 2) {
                    pref1[i] = -1;
                    pref2[i] = 1;
                }
                else if (input == 3) {
                    pref1[i] = -1;
                    pref2[i] = -1;
                }
            }
            else {
                if (input == 1) {
                    pref1[i] = pref1[i-1] + 1;
                    pref2[i] = pref2[i-1] + 1;
                }
                else if (input == 2) {
                    pref1[i] = pref1[i-1] - 1;
                    pref2[i] = pref2[i-1] + 1;
                }
                else if (input == 3) {
                    pref1[i] = pref1[i-1] - 1;
                    pref2[i] = pref2[i-1] - 1;
                }                
            }
        }
        bool possible = false;
        int x_min = -1;
        for (int y = 1, x = 0; y < n-1; y++, x++) {
            if (pref1[x] >= 0) {
                if ((x_min == -1) || (pref2[x] <= pref2[x_min])) {
                    x_min = x;
                }
            }
            if (x_min == -1) {
                continue;
            }
            if ((pref1[x_min] >= 0) && (pref2[y] >= pref2[x_min])) {
                possible = true;
            }
        }
        if(possible) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}