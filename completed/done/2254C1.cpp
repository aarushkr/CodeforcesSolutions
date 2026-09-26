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
        string a, b;
        cin >> n >> a >> b;
        if (n < 3) {
            if (a == b) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            bool invalid = false;
            int count0a = 0;
            int count1a = 0;
            int count0b = 0;
            int count1b = 0;
            for (int i = 0; i < n; i+=2) {
                if (a[i] == '0') {
                    count0a++;
                }
                else {
                    count1a++;
                }
                if (b[i] == '0') {
                    count0b++;
                }
                else {
                    count1b++;
                }
            }
            if ((count0a != count0b) || (count1a != count1b)) {
                invalid = true;
            }

            count0a = 0;
            count1a = 0;
            count0b = 0;
            count1b = 0;
            for (int i = 1; i < n; i+=2) {
                if (a[i] == '0') {
                    count0a++;
                }
                else {
                    count1a++;
                }
                if (b[i] == '0') {
                    count0b++;
                }
                else {
                    count1b++;
                }
            }
            if ((count0a != count0b) || (count1a != count1b)) {
                invalid = true;
            }
            if(invalid) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}