#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

void insertPoints (set<pair<int, int>>& s, int a, int b, int x, int y) {
    s.insert({(x+a), (y+b)});
    s.insert({(x-a), (y+b)});
    s.insert({(x+a), (y-b)});
    s.insert({(x-a), (y-b)});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        set<pair<int, int>> fromKing;
        set<pair<int, int>> fromQueen;
        int count = 0;
        insertPoints(fromKing, a, b, xk, yk);
        insertPoints(fromKing, b, a, xk, yk);
        insertPoints(fromQueen, a, b, xq, yq);
        insertPoints(fromQueen, b, a, xq, yq);
        auto i = fromKing.begin();
        auto j = fromQueen.begin();
        while((i != fromKing.end()) && (j != fromQueen.end())) {
            if (*i == *j) {
                count++;
                i++, j++;
            }
            else if (*i < *j) {
                ++i;
            }
            else {
                ++j;
            }
        }
        cout << count << '\n';
    }
}