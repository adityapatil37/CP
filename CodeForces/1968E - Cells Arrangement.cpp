#include <iostream>
#define ll long long
 
ll pow(ll x, ll y, ll m = 1e9 + 7) {
    ll ans = 1;
    x %= m;
    while (y) {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
}
 
void solve() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
        std::cout << i << " " << (i == 2 ? i - 1 : i) << std::endl;
    std::cout << std::endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int TCS = 1;
    std::cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC) {
        solve();
    }
    return 0;
}