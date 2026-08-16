#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

void ifodd() {
    vector<int> v = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};
    for (int x : v) {
        cout << x << ' ';
    }
    return;
}

void printnum(int i) {
    cout << i << ' ' << i+1 << ' ' << i+1 << ' ' << i << ' ';
    cout << i+1 << ' ' << i << ' ' << i << ' ' << i+1 << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            for (int i = 1; i < n; i+=2) {
                printnum(i); 
            }
        }
        else {
            ifodd();
            for (int i = 4; i <= n-1; i+=2) {
                printnum(i);
            }
        }
        cout << '\n';
    }
}