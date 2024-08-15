#include <iostream>
#include <map>
#define int long long
using namespace std;

const int MOD = 1e9+7;

int inverse_modulo(int a, int m) {
    int result = 1;
    while (m > 0) {
        if (m % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        m /= 2;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        freq[x]++;
    }

    int num = 1, den = 1, s = n;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        int t = it->second;
        while (t > 0) {
            num = (num * t) % MOD;
            den = (den * s) % MOD;
            t--;
            s--;
        }
    }

    int inv = inverse_modulo(den, MOD);
    int ans = (num * inv) % MOD;

    cout << ans << endl;

    return 0;
}
