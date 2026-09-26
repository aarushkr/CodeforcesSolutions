#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

ll lcm(ll x, ll y) {
    return ((x * y) / gcd(x, y));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;
        
        const ll anbnc = m / lcm(lcm(a, b), c);
        const ll anb = m / lcm(a, b);
        const ll anc = m / lcm(a, c);
        const ll bnc = m / lcm(b, c);
        const ll a_ = m / a;
        const ll b_ = m / b;
        const ll c_ = m / c;

        ll a_score = (a_ - anb - anc + anbnc) * 6 + (anb + anc - anbnc*2) * 3 + anbnc * 2;
        ll b_score = (b_ - bnc - anb + anbnc) * 6 + (anb + bnc - anbnc*2) * 3 + anbnc * 2;
        ll c_score = (c_ - anc - bnc + anbnc) * 6 + (bnc + anc - anbnc*2) * 3 + anbnc * 2;
        cout << a_score << ' ' << b_score << ' ' << c_score << '\n';
        }
    return 0;
}