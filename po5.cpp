#include <iostream>

int main() {

    int base = 1;

    for (int a = 1; a < 21; a++)
    {
            base *= a;
            std::cout << a << "! = " << base << std::endl;
    
    }


    // at 17 and 18, it goes negative before going back positive at 19 and back to neg at 20
    // it would hit the largest number a int can hold; overflow error
    
 


 

    return 0;
}
