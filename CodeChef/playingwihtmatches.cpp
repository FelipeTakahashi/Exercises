#include <iostream>
#include <bits/stdc++.h>

int main() {
    int t, a, b, number, sum, matches;
        std::cin >> t;
        
    int d[10] = {6,2,5,5,4,5,6,3,7,6};
    
    for (int i = 0; i < t; ++i) {
        matches = 0;
        std::cin >> a >> b;
        sum = a + b;
        
        while (sum > 0) {
            number = sum % 10;
            sum /= 10;
            matches += d[number];
        }
        
        std::cout << matches << std::endl;
    }
}
