#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    bool change = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            change = true;
            break;
        }
    }
    if (change) {
        cout << "YES\n";
        string temp = s;
        string a = temp, b = temp;
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        if (a == s) {
            cout << b << endl;
        } else {
            cout << a << endl;
        }
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}