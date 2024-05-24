
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << max(a, b) << "\n";
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