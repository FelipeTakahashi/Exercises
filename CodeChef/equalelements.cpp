#include <bits/stdc++.h>

int main() {
    int t, n;
        std::cin >> t;
        
    for (int i = 0; i < t; ++i) {
        std::cin >> n;
        
        int arr[n];
        std::vector<int> freq(n+1, 0);
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
            freq[arr[j]]++;
        }
        
        std::sort(freq.begin(), freq.end());
            int max = freq[n];
        std::cout << n - max << std::endl;
    }
}
