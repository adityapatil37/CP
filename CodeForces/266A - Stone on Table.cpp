#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    char array[55];
    cin >> array;

    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        if (array[i] == array[i + 1]) {
            sum++;
        }
    }
    cout << sum << "\n";

    return 0;
}