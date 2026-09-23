#include <iostream>




int main() {
    
    int a;
    std::cout << "enter the first number: ";
    std::cin >> a;

    int b;
    std::cout << "enter the second number: ";
    std::cin >> b;
    
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    
    std::cout << "GCD is " << a << std::endl; 
              
    return 0;
}
