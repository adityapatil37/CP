#include <iostream>
using namespace std;

long long BC(long long n, long long r) {
    long long value = 1;
    for (long long i = 0; i < r; i++) {
        value *= (n - i);
        value /= (i + 1);
    }
    return value;
}

int main() {
    long long n, m, t, result = 0;
    cin >> n >> m >> t;
    
    for (long long i = max(4LL, t - m); i <= min(n, t - 1); i++) {
        result += BC(n, i) * BC(m, t - i);
    }

    cout << result << endl;
    return 0;
}
