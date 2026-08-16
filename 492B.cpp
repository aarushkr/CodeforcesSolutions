#include <bits/stdc++.h>
#define loop(i, b) for (int i = 0; i < b; i++)
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int l;
    cin >> n >> l;
    vector<int> a(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin()+1, a.end()-1);
    a[0] = 0;
    a[n+1] = l;

    int max_diff = 0;
    int diff;
    for(int i = 2; i <(n+1); i++) {
        diff = a[i]-a[i-1];
        max_diff = max(max_diff, diff);
    }
    int tmp = max((a[1] - a[0]), (a[n+1]-a[n]));
    double ans = max((double)tmp, ((double)max_diff/2.0));
    cout << fixed << setprecision(10) << ans;
}