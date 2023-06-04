#include <iostream>

int main() {
    int t, n, count = 0;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        count = 0;
        std::cin >> n;
        int ratings[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> ratings[j];
            if (ratings[j] >= 1000) {
                count += 1;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
