#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

string reduce(const string& s, int n) {
    if(n == 0) return "";

    string str = "";
    int i = 0;
    for (i; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            i++;
        }
        else {
            str += s[i];
        }
    }
    if (i == n-1) {
        str += s[i];
    }

    return str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string str = reduce(s, n);
        while((str != s) && (str != "")) {
            s = str;
            str = reduce(str, str.size());
        }

        if (str == "") {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }


    return 0;
}