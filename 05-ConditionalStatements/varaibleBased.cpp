#include <iostream>
int main()
{
    // Varaible based conditional statements

    // int age = 19;
    std::cout << "Enter your age " << std::endl;
    int age;
    std::cin >> age;

    bool verified = (age >= 18);
    std::cout << std::boolalpha << verified;
    return 0;
}