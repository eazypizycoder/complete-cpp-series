#include <iostream>
int main()
{

    int age{18};

    switch (age)
    {
    case 18:
        std::cout << "You are verified";
        break;

    case 17:
        std::cout << "You are not verified";
        break;
    case 19:
        std::cout << "You are not verified";
        break;

    default:
        std::cout << "Not verified";
        break;
    }
    return 0;
}