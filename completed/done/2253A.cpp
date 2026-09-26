#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    for (int i = 3; (i * i) <= n; i+=2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (isPrime(n + 1)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}