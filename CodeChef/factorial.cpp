#include <iostream>

int main() {
	int t, a, b, c;
	    std::cin >> t;
	for (int i = 0; i < t; i++) {
	    b = 0;
	    c = 1;
	    std::cin >> a;
	    while (a / c > 0) {
	        c *= 5;
	        b += (a/c);
	    }
	    std::cout << b << std::endl;
	}
}
