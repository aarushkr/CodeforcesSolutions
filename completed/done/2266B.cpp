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
        ll a, b, c;
        cin >> a >> b >> c;
        ll score = 0;
        if (a >= b) {
            score = a + c - b;
        }
        else {
            //a<b
            ll diff = abs(a - b);
            score = diff;
            if(c > (diff * (ll)2)) {
                a += c;
                score = abs(a-b);
            }
        }
        cout << score << '\n';
    }
    return 0;
}