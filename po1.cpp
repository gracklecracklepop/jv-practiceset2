#include <iostream>

int main(){

    
    int input_year;
    std::cout << "Enter a year: ";
    std::cin >> input_year;
    

    if ((input_year % 4 == 0 && input_year % 100 != 0) || (input_year % 400 == 0)) {
         std::cout << input_year << " is a leap year" << std::endl;
    } else {
         std::cout << input_year << " is not a leap year" << std::endl;
    
    }
    std::cout << std::endl;
    return 0;
}