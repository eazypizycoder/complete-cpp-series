#include <iostream>
int main()
{

    // operator + - * /
    // operands varaibles

    // int a{10};
    // int b{20};

    // operator
    // operands =>a b

    // int c=a+b;  //classical
    // int c{a + b}; //modern

    // operators

    // int a{10};
    // int b{20};
    // // int c{a + b};
    // int c=a+b;
    // std::cout<<c;

    int a{};
    int b{};
    std::cout << "Enter two numbers for addition ";
    std::cin >> a;
    std::cin >> b;
    float divide=a/b;
    std::cout << "The value of a and b is " << divide << std::endl;

    return 0;
}