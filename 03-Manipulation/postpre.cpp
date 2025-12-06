#include <iostream>
int main()
{
    // prefix

    // int a=0;
    // // increment 1
    // ++a;
    // std::cout<<a;
    // // postfix
    // std::cout<<std::endl;
    // int b=1;
    // b++;
    // std::cout<<b;

    // int a{10};
    // std::cout<<"value of a "<<a;
    // ++a;
    // int b=a++;

    // std::cout << "prefix value of a " << a<<" and the value of b is "<< b<<std::endl;

    // prefix

    int a = 10;
    int b = ++a;
    std::cout << "value of a " << a << " value of b " << b << std::endl;
    // postfix
    int x = 10;
    int y = x++;
    std::cout << "value of x " << x << " and value of y is " << y;

    return 0;
}