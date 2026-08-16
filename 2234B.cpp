#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a,b;
        if (n == 10) {
            cout << "-1\n";
            continue;
        }
        if (n < 10) {
            a = n;
            b = 0;
        }
        else if (n%12 != 10)
        {
            a = n%12;
            b = n - a;
        }
        else if (n%12 == 10)
        {
            a = 22;
            b = n - a;
        }
        else {
            cout << "-1\n";
            continue;
        }
        cout << a << ' ' << b << '\n';
    }
}