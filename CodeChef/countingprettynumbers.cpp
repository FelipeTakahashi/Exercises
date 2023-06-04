#include <iostream>

int main() {
    int t, a, b, count = 0;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        count = 0;
        for (int j = a; j <= b; j++) {
            if (j % 10 == 2 or j % 10 == 3 or j % 10 == 9) {
                count += 1;
            }
        }
        std::cout << count << std::endl;
    }
}
