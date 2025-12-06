#include <iostream>
int main()
{
    // DMAS => rules
    // precedence and assosiativity
    // precedence => which operator do first
    // assosiativity =>

    int a{10};
    int b{5};
    int c = a + b * a - a / b;
    int d=a+b-b;
    std::cout << "Output = " << c;
    return 0;
}