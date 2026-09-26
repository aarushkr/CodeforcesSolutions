#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;
    vector<int> p(n);
    vector<int> t(n);
    loop(i, n) {
        cin >> p[i];
    }
    loop(i, n) {
        cin >> t[i];
    }
    int Limak = 0;
    int Radewoosh = 0;
    int time_passed = 0;
    loop(i, n) {
        time_passed += t[i];
        Limak += max(0, (p[i] - (c*time_passed)));
    }
    time_passed = 0;
    for (int i = n-1; i >= 0; i--) {
        time_passed += t[i];
        Radewoosh += max(0, (p[i] - (c*time_passed)));
    }
    if (Limak > Radewoosh) {
        cout << "Limak\n";
    }
    else if (Radewoosh > Limak) {
        cout << "Radewoosh\n";
    }
    else {
        cout << "Tie\n";
    }
}