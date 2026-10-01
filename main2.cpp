#include <iostream>

int main() {
    setlocale(LC_ALL, "ru.UTF-8"); // Set the locale to Ukrainian UTF-8

    int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";      
    std::cin >> b;
    std::cout << "Sum: " << a + b << std::endl;

    switch (a) {
        case 1:
            std::cout << "a is 1" << std::endl;
            break;
        case 2:
            std::cout << "a is 2" << std::endl;
            break;
        default:
            std::cout << "a is neither 1 nor 2" << std::endl;
    }
 
}