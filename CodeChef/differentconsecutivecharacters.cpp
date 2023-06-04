#include <iostream>

int main() {
    int t, n, count;
        std::cin >> t;
    
    std::string s;
    for(int i = 0; i < t; ++i) {
        count = 0;
        std::cin >> n;
        std::cin >> s;
        
        for (int j = 0; j < n; ++j) {
            if (s[j] == s[j+1]) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
}
