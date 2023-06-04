#include <iostream>

int main() {
    int t, x;
        std::cin >> t;
        
    for (int i = 0; i < t; i++) {
        std::cin >> x;
        if (67 <= x and x <= 45000) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
