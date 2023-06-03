#include <iostream>

int main() {
    int t, x, n;
        std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        std::cin >> x >> n;
        std::cout << (x/10) * n << std::endl;
    }
}
