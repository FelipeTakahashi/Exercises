#include <iostream>

int main() {
    int t, p1 = 0, p2 = 0, lead_p1 = 0, lead_p2 = 0;
        std::cin >> t;
    
    int a, b, lead;
    
    for (int i = 0; i < t; ++i) {
        std::cin >> a >> b;
        p1 += a;
        p2 += b;
        if (a > b) {
            lead = p1 - p2;
            if (lead > lead_p1) {
                lead_p1 = lead;
            }
        }
        else {
            lead = p2 - p1;
            if (lead > lead_p2) {
                lead_p2 = lead;
            }
        }
    }
    
    if (lead_p1 > lead_p2) {
        std::cout << "1 " << lead_p1 << std::endl;
    }
    else {
        std::cout << "2 " << lead_p2 << std::endl;
    }
}
