#include <iostream>

int main() {
    int weeks[4], count = 0;
    
    for (int i = 0; i < 4; ++i) {
        std::cin >> weeks[i];
        if (weeks[i] >= 10) {
            count += 1;
        }
    }
    
    std::cout << count << std::endl;
}
