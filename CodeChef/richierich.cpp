#include <iostream>

int main() {
    int t, a, b, x, count;
        std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        count = 0;
        std::cin >> a >> b >> x;
        while (a != b) {
            a += x;
            count += 1;
        }
        std::cout << count << std::endl; 
    }
}
