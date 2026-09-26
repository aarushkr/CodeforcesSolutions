#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> cards(n);
    loop(i, n) {
        cin >> cards[i];
    }
    int s1 = 0;
    int s2 = 0;
    loop(i, n) {
        if (i%2 == 0) {
            if (cards.front() > cards.back()) {
                s1 += cards.front();
                cards.pop_front();
            }
            else {
                s1 += cards.back();
                cards.pop_back();
            }
        }
        else {
            if (cards.front() > cards.back()) {
                s2 += cards.front();
                cards.pop_front();
            }
            else {
                s2 += cards.back();
                cards.pop_back();
            }
        }
    }
    cout << s1 << ' ' << s2;
}