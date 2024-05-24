#include <iostream>
using namespace std;
 
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mini = min(a, b);
    int maxi = max(a, b);
    int mini1 = min(c, d);
    int maxi1 = max(c, d);
    if (((mini1 > mini && mini1 < maxi) && (maxi1 < mini || maxi1 > maxi)) || ((maxi1 > mini && maxi1 < maxi) && (mini1 < mini || mini1 > maxi))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}