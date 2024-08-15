#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
const int INF = 0x3f3f3f3f;

void debug(set<int> s) {
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;
}

void debug(unordered_set<int> s) {
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;
}

void debug(vector<string> s) {
    for (string i : s) {
        cout << i << " ";
    }
    cout << endl;
}

void debug(vector<pii> v) {
    cout << "PAIR START" << endl;
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }
    cout << "PAIR END" << endl;
}

void debug(vector<int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void debug(map<int, int> v) {
    cout << "PAIR START" << endl;
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }
    cout << "PAIR END" << endl;
}

void debug(vector<vector<int>> adj) {
    for (vector<int> i : adj) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void iohelp(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

ll max(ll a, ll b) {
    return a > b ? a : b;
}

ll min(ll a, ll b) {
    return a < b ? a : b;
}

ll gcd(ll a, ll b) {
    ll temp = min(a, b);
    a = max(a, b);
    b = temp;
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

string decimalToBinary(int n) {
    string binary = bitset<64>(n).to_string();
    return binary.substr(binary.find('1'));
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char c : binary) {
        decimal = decimal * 2 + (c - '0');
    }
    return decimal;
}

int countPairsRecursively(vector<int>& boys, vector<int>& girls, int i, int j,vector<vector<int>>&dp) {
    if (i >= boys.size() || j >= girls.size()) {
        return 0;

    }
    if(dp[i][j]!=-1)return dp[i][j];

    if (abs(boys[i] - girls[j]) <= 1) {
        return dp[i][j]= 1 + countPairsRecursively(boys, girls, i + 1, j + 1,dp);
    } else if (boys[i] < girls[j]) {
        return dp[i][j]= countPairsRecursively(boys, girls, i + 1, j,dp);
    } else {
        return dp[i][j]=countPairsRecursively(boys, girls, i, j + 1,dp);
    }
}

void solve() {
    int n, m;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) cin >> boys[i];

    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) cin >> girls[i];
   
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    vector<vector<int>>dp(n,vector<int>(m,-1));

    int cnt = countPairsRecursively(boys, girls, 0, 0,dp);

    cout << cnt << endl;
}

int32_t main() {
    fastio;
    solve();
    return 0;
}
