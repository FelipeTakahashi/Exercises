#include <iostream>
#include <algorithm>

int main() {
    int t, a ,b;
        std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        std::cout << std::min(a, b) << std::endl;
    }
}
