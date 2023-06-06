#include <iostream>
#include <bits/stdc++.h>

int main() {
    int t, n, a, b;
        std::cin >> t;
        
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        b = 0;
        for (int j = 0; j < n; ++j) {
            std::cin >> a;
            b ^= a;
        }
        std::cout << b << std::endl;
    }
}
