#include <iostream>

int main() {
    int t, a, b;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        
        if (a >= b) std::cout << "YES" << std::endl;
        
        else std::cout << "NO" << std::endl;
    }
}
