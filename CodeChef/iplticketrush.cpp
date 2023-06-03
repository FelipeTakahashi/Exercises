#include <iostream>

int main() {
    int t, n, m;
    std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        std::cin >> n >> m;
        if (n - m <= 0) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << n - m << std::endl;
        }
    }
}
