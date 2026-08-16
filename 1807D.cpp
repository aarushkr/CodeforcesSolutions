    #include <bits/stdc++.h>
    #define loop(i, b) for (int i = 0; i < b; i++)
    using namespace std;
    using ll = long long;

    void parityflip(int& p) {
        
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        while(t--) {
            int n, q;
            cin >> n >> q;
            vector<int> a(n);
            loop(i, n) {
                cin >> a[i];
            }
            vector<ll> psum(n);
            psum[0] = a[0];
            for (int i = 1; i < n; i++) {
                psum[i] = a[i] + psum[i-1];
            }
            int parity; // 0 is even, 1 is odd
            if (psum[n-1]%2) {
                parity = 1;
            }
            else {
                parity = 0;
            }
            int perm = parity;
            while(q--) {
                int l, r, k;
                cin >> l >> r >> k;
                l--; r--;
                ll sum;
                if (l == 0) {
                    sum = psum[r];
                }
                else {
                    sum = psum[r] - psum[l-1];
                }
                ll diff = abs(sum - ((r-l+1)*k));
                if(diff%2 == 1) {
                    if(parity == 0) {
                        parity = 1;
                    }
                    else {
                        parity = 0;
                    }
                }
                if(parity == 0) {
                    cout << "NO\n";
                }
                else {
                    cout << "YES\n";
                }
                parity = perm;
            }
        }
    }
