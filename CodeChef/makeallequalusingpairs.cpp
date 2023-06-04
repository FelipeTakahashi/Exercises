#include <iostream>
#include <algorithm>
 
int main() {
    int t, n;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> n;
        
        int arr[n], freq[n];
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
        }
        
        for (int k = 0; k < n; k++) {
            freq[k] = 0;
            for (int l = 0; l < n; ++l) {
                if (arr[k] == arr[l]) {
                    freq[k] += 1;
                }
            }
        }
        
        int* max;
        max = std::max_element(freq, freq+n);

        std::cout << n - *max << std::endl;
    }
}
