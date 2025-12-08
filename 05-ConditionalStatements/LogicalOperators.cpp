#include <iostream>
int main()
{
    // Logical Operators

    int age;
    std::cout << "Enter your age " << std::endl;
    std::cin >> age;

    std::string gender;
    std::cout << "Enter you gender male or female ";
    std::cin >> gender;

    if (age >= 18 || gender== !"male" )
    {
        std::cout << "You are verified ";
    }
    else
    {
        std::cout << "You are not verified";
    }

    return 0;
}