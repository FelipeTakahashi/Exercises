#include <iostream>

int main() {
    int t, x, y, xr, yr, d;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> x >> y >> xr >> yr >> d;
        xr *= d;
        yr *= d;
        if (x - xr >= 0 and y - yr >= 0) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
