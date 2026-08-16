#include <bits/stdc++.h>
using namespace std;

int count_1(int n);

int main() {
    int n{};
    cin >> n;
    int num1{count_1(n)};
    int ans{0};
    for (int i = 0; i < num1; i++) {
        ans = 
    }
}

int count_1(int n) {
    int rem{-1};
    int c{};
    while (n != 0) {
        rem = n%2;
        if (rem == 1)
            c++;
        n /= 2;
    }
    return c;
}