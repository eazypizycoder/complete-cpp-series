#include <iostream>

// void varaible(){
//     int a=10;
//     std::cout<<a;
// }

void staticVaraible()
{
    static int a = 0;
    int b = 0;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    a++;
    b++;
}

int main()
{
    // varible scope
    int a = 10;

    // {
    //     // int a = 20;
    //     std::cout<<a;
    // }
    // std::cout << std::endl;
    // std::cout << a;

    // variable life
    // simple
    // dynamic varaible
    // static variable

    staticVaraible();
    staticVaraible();
    staticVaraible();
    staticVaraible();
    staticVaraible();

    return 0;
}