#include <iostream>
#include <string>
 
using namespace std;
 
long long func(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main() {
    string s;
    cin >> s;
 
    if (s.size() != 1) {
        long long sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += (s[i] - '0');
        }
 
        int cnt = 1;
        while (sum >= 10) {
            long long ans = sum;
            sum = func(ans);
            cnt++;
        }
        cout << cnt << endl;
    } else {
        cout << "0" << endl;
    }
 
    return 0;
}