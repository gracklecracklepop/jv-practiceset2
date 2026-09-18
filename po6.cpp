#include <iostream>

int main() {

    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

     if (input <= 1)
       std::cout << "isnt prime";

    if (input == 2)
        std::cout << "is prime";   
    
    if (input % 2 == 0)
        std::cout << "isnt prime";     



     for (int i = 3; i * i <= input; i += 2) {
        if (input % i == 0) {
            std::cout << "isnt prime";

        }
    }

    std::cout << "is prime";
    

 

    return 0;
}
