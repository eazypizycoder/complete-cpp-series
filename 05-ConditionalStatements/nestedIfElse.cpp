#include <iostream>
int main()
{
    // Nested ifelse conditional statement

    int age;
    std::string gender;
    std::cout << "Enter your age " << std::endl;
    std::cin >> age;
    std::cout << std::endl;
    std::cout << "Are you male or female " << std::endl;
    std::cin >> gender;

    if (age >= 18)
    {
        // greater than 18
        if (gender == "male")
        {
            std::cout << "Okay you are verified as a male";
            
        }
        else
        {
            std::cout << "Okay you are verified as a female";
        }
    }
    else
    {

        // smaller than 18

        if (gender == "male")
        {
            std::cout << "Okay you are not verified as a male due to the age restrictions";
        }
        else
        {
            std::cout << "Okay you are not verified as a female due to the age restrictions";
        }
    }

    return 0;
}