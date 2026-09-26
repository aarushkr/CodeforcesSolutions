#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

const int MAX = 200002;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> c(MAX, 0);
    while(n--) {
        int l,r;
        cin >> l >> r;
        c[l]++;
        c[r+1]--;
    }
    loop(i, MAX) {
        if(i == 0) {
            continue;
        }
        c[i] += c[i-1];
    }
    loop(i, MAX) {
        if(c[i] >= k) {
            c[i] = 1;
        }
        else {
            c[i] = 0;
        }
    }
    loop(i, MAX) {
        if(i == 0) {
            continue;
        }
        c[i] += c[i-1];
    }
    
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << c[r] - c[l-1] << '\n';
    }
}