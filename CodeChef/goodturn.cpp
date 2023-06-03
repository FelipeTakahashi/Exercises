#include <iostream>

int main() {
    int reps, d1, d2;
    
        std::cin >> reps;
        
    for (int i = 0; i < reps; ++i) {
        std::cin >> d1 >> d2;
        if (d1+d2 > 6) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
