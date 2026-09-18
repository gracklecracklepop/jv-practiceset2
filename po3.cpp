#include <iostream>
#include <iomanip> 

int main() {
    int number;
    int count = 0;
    int sum = 0;

    std::cout << "enter numbers (-1 to stop): ";


    while (std::cin >> number && number != -1) {
        sum += number;
        count++;
    }

    std::cout << "count: " << count << std::endl;
    std::cout << "sum: " << sum << std::endl;

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "average is " << std::fixed << std::setprecision(4) << average << std::endl;
    } else {
        std::cout << "average is 0.0000" << std::endl;
    }

    return 0;
}
