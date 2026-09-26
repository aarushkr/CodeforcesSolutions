#include <bits/stdc++.h>
#define loop(i, b) for(int i = 0; i < b; i++) 
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> n >> m;
        vector<int> a(n);
        loop(i, n) {
            cin >> a[i];
        }
        priority_queue <int> pq;
        ll sum = 0;
        ll ans = LLONG_MIN;
        loop(i, n) {
            if (pq.size() == m-1) {
                ans = max(ans,((ll) m * a[i]) - sum);
            }
            pq.push(a[i]);
            sum += a[i];
            if (pq.size() >= m) {
                sum -= pq.top();
                pq.pop();

            }   
        }
        cout << ans << '\n';
    }
}