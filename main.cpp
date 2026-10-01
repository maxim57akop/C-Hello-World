#include <iostream>

int main() {
    // Set the locale to Ukrainian UTF-8
    /*
    Command: setlocale(int category, const char *locale);
    */
    setlocale(LC_ALL, "uk_UA.UTF-8");
    std::cout<<"All is okay!\n"<<std::endl;
    std::cout<<"прівет2"<<std::endl;
    return 0;
}