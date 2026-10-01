#include <iostream>
#include <locale>
int main() {
    // Set the locale to Ukrainian UTF-8
    /*
    Command: setlocale(int category, const char *locale);
    */


    int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Sum: " << a + b << std::endl;

    short a1=1; // -32k to 32k 2 bytes
    int b2=1; // -2B to 2B 4 bytes
    long c=1; // -9B to 9B 8 bytes
    long long d=1; // -9Q to 9Q 16 bytes

    unsigned short e=1; // 0 to 64k 2 bytes
    unsigned int f=1; // 0 to 4B 4 bytes
    unsigned long g=1; // 0 to 18B 8 bytes   
    float h=1.0123213321f; // 4 bytes
    double i=1.0423432432f; // 8 bytes   

    char j='A'; // 1 byte
    bool isAproov=true; // 1 byte
    return 0;
}