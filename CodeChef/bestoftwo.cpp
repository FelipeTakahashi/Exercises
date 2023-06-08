#include <iostream>

int main() {
    int t, m, n;
        std::cin >> t;
        
    for(int i = 0; i < t; ++i) {
        std::cin >> m >> n;
        
        if (m > n) std::cout << m << std::endl;
        else std::cout << n << std::endl;
    }
}
