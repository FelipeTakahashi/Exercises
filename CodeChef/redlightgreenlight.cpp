#include <iostream>

int main() {
    int t, n, k;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        int count = 0;
        std::cin >> n >> k;
        
        int h[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> h[n];
            if (h[n] > k) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
}
