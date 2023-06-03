#include <iostream>

int main() {
    int minimum, maximum, age, reps;
        std::cin >> reps;
        
    for (int i = 0; i < reps; ++i) {
        std::cin >> minimum >> maximum >> age;
        if (minimum <= age and age < maximum) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
}
