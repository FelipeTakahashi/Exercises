#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace boost::multiprecision;

int main() {
	int t;
	std::cin>>t;
	
	for (int j = 0; j < t; ++j) {
	    int n;
	    std::cin>>n;
	    
	    cpp_int fact=1;
	    for(int i = n; i > 0; --i)
	     fact = fact * i;
	    std::cout << fact << std::endl; 
	}
	
	return 0;
}
