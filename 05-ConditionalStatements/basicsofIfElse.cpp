#include <iostream>
int main()
{
    // Varaible based conditional statements

    // int age = 19;
    
    std::cout << "Enter your age " << std::endl;
    int age;
    std::cin >> age;

    if (age>=18)
    {
        std::cout<<"You are verified ";
    }
    else
    {
        std::cout<<"You are not verified";
    }
    
    
    


    return 0;
}