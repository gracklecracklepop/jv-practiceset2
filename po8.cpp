#include <iostream>

int main() {
    int input;
    std::cout << "enter a number: ";
    std::cin >> input;
    
    int temp = input;
    int reverse = 0;
    
    while (temp > 0) {
        int dig = temp % 10;
        reverse = reverse * 10 + dig;
        temp /= 10;
    }
    

    if (input==reverse)
        std::cout << "palindrome.";
    else
        std::cout << "not a palindrome.";
    return 0;
}
