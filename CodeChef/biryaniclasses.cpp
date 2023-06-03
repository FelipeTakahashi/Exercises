#include <iostream>

int main() {
    int t, x, y;
        std::cin >> t;
    
    for(int i = 0; i < t; ++i) {
        std::cin >> x >> y;
        std::cout << x * y << std::endl;
    }
}
