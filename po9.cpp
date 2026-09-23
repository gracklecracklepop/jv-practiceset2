#include <iostream>

int main() {
    
    char c1 = 'H';
    char c2 = 'E';
    char c3 = 'L';
    char c4 = 'L';
    char c5 = 'O';
    char c6 = 'Y'; 

    int shift = 3;

 
    char s1 = ((c1 - 'A' + shift) % 26) + 'A';
    char s2 = ((c2 - 'A' + shift) % 26) + 'A';
    char s3 = ((c3 - 'A' + shift) % 26) + 'A';
    char s4 = ((c4 - 'A' + shift) % 26) + 'A';
    char s5 = ((c5 - 'A' + shift) % 26) + 'A';
    char s6 = ((c6 - 'A' + shift) % 26) + 'A';

    std::cout << s1 << s2 << s3 << s4 << s5 << s6 << std::endl;

    return 0;
}
