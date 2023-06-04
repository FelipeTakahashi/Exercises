#include <iostream>

int main() {
    int t, a;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> a;
            if (a % 2 == 0) {
                std::cout << a << std::endl;
            }
            else {
                std::cout << a + 2 << std::endl;
            }
    }
}
