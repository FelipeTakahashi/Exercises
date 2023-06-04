#include <iostream>
#include <string>

int main() {
    int t, n, s_count = 0, l_count = 0;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        s_count = 0;
        l_count = 0;
        std::cin >> n; 
        std::string v[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> v[j];
            if (v[j] == "START38") {
                s_count += 1;
            }
            else if (v[j] == "LTIME108") {
                l_count += 1;
            }
        }
        std::cout << s_count << " " << l_count << std::endl;
    }
    return 0;
}
