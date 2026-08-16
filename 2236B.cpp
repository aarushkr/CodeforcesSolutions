#include <bits/stdc++.h>
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
using ll = long long;

bool count1odd(string& s) {
    int ans = 0;
    for(char c : s) {
        if(c == '1')
            ans++;
    }
    if (ans % 2 == 1) {
        return true;
    }
    else {
        return false;
    }
}

void invert(string& s, int i, int k) { 
    s[i] = '0';
    s[i+k] = s[i+k] == '1' ? '0' : '1';
}

bool  any1(string& s) {
    for (char c : s) {
        if (c == '1') {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(count1odd(s)) {
            cout << "NO\n";
            continue;
        }
        loop(i, 0, n-k) {
            if (s[i] == '1') {
                invert(s, i, k);
            }
        }
        if(any1(s)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}