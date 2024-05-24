#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long n, sum = 0;
    bool turn = false;
    cin >> n;
    if (n == 1) {
        cout << 1 << " " << 1 << endl;
        cout << 1 << " " << 1 << " " << 1 << endl;
    } else if (n == 2) {
        cout << 7 << " " << 3 << endl;
        cout << 1 << " " << 1 << " " << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << " " << 1 << " " << 2 << endl;
        cout << 2 << " " << 1 << " " << 1 << " " << 2 << endl;
    } else {
        long long index1 = ceil(n / 2.0);
        int j = 1;
        for (int i = 1; i <= n; i++) {
            sum += i * j;
            j += 2;
        }
        cout << sum << " " << 2 * n << endl;
        j = n;
        for (int i = 2 * n; i > 0; i--) {
            if (turn == false) {
                cout << 1 << " " << j << " ";
                for (int k = 0; k < n; k++) {
                    cout << k + 1 << " ";
                }
                cout << endl;
            } else {
                cout << 2 << " " << j << " ";
                for (int k = 0; k < n; k++) {
                    cout << k + 1 << " ";
                }
                cout << endl;
                j--;
            }
            turn = !turn;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}