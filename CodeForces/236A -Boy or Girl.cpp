#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int l = s.length();
    int ans = 0;
    for (int i = 1; i < l; i++) {
        if (s[i] != s[i - 1])
            ans++;
    }
    if (ans & 1)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";

    return 0;
}
