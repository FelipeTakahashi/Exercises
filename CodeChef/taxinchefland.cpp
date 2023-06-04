#include <iostream>

int main() {
    int t, s;
        std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        std::cin >> s;
        if (s > 100) {
            std::cout << s - 10 << std::endl;
        }
        else {
            std::cout << s << std::endl;
        }
    }
}
