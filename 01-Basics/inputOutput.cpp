#include <iostream>
int main()
{
    // output

    // c=> chara
    // out => output
    // << => insertion
    // " "
    std::cout << "Enter your name ";

    // input
    // c=> character
    // in=> input
    // >>
    // name => as a varaible
    std::string name;

    getline(std::cin,name);

    std::cout << name;
    return 0;
}