#include <iostream>

int main() {
    int input;
    std::cout << "enter a number: ";
    std::cin >> input;
    
    if (input == 0) {
        std::cout << "0 in binary is 0" << std::endl;
        return 0;
    }

    std::cout << input << " in binary is ";

 
    int power = 1;
    while (power <= input / 2) { 
        power *= 2; 
    }

 
    while (power > 0) {
        if (input >= power) {
            std::cout << 1;
            input -= power; 
        } else {
            std::cout << 0;
        }
        power /= 2; 
    }

    std::cout << std::endl;
    return 0;
}
