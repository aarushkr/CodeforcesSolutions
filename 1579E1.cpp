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
        deque<int> dq;
        loop(i, n) {
            int input;
            cin >> input;
            if (i == 0) {
                dq.push_back(input);
                continue;
            }
            if (dq.front() > input) {
                dq.push_front(input);
            }
            else {
                dq.push_back(input);
            }
        }
        for (int x : dq) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}