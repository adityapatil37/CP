#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        
        vector<bool> visited(n, false);
        int min_cycle_length = n;
        
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int cycle_length = 0;
                int x = i;
                
                while (!visited[x]) {
                    visited[x] = true;
                    x = p[x] - 1;  // Adjust for 1-based index
                    cycle_length++;
                }
                
                min_cycle_length = min(min_cycle_length, cycle_length);
            }
        }
        
        cout << min_cycle_length << endl;
    }
    
    return 0;
}
