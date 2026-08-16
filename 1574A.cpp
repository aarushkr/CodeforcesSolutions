#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
using ll = long long;

void print1(int a) {
    loop(i, 0, a) {
        cout << '(';
    }
}
void print2(int a) {
    loop(i, 0, a) {
        cout << "()";
    }
}
void print3(int a) {
    loop(i, 0, a) {
        cout << ')';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        loop (i, 0, n) {
            print1(i);
            print2(n-i);
            print3(i);
            cout << '\n';
        }
        cout << '\n';
    }
}