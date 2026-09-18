#include <iostream>


int gcdIterative(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
     int a;
    std::cout << "Enter the first number: ";
    std::cin >> a;

    int b;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    
    std::cout << "GCD of " << a << " and " << b << " is: " 
              << gcdIterative(a, b) << std::endl; // Outputs 13
              
    return 0;
}
