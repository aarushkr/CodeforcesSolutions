#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int num1{}, num0{};
    for (int i = 0; i < n; i++) {
        (s[i] == '0') ? num0++ : num1++;
    }     
    cout << abs(num1 - num0);  
}