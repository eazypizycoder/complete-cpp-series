#include <iostream>
int main()
{
    // Advance ifelse conditional statements

    int age;
    std::string gender;
    std::cin >> age;
    std::cout << "Enter your age " << std::endl;
    std::cout << "Are you male or female " << std::endl;
    std::cin >> gender;

    // 18>18 flase
    // 18=18 true

    if (age > 18)
    {
        std::cout << "You are verified ";
        if (gender == "male")
        {
            std::cout << "Okay you are verified as a male";
        }
        else
        {
            std::cout << "Okay you are verified as a female";
        }
    }
    else if (age == 18)
    {
        std::cout << "Okay just wait for the 1 year to verify ";
        if (gender == "male")
        {
            std::cout << "Okay just wait for the one year for verification as a male";
        }
        else
        {
            std::cout << "Okay just wait for the one year for verification as a female";
        }
    }
    else if (age == 17)
    {
        std::cout << "Bro just wait 2 year more for verification";

        if (gender == "male")
        {
            std::cout << "Okay just wait for the two years for verificationa male";
        }
        else
        {
            std::cout << "Okay just wait for the two years for verifications as a female";
        }
    }
    else
    {
        std::cout << "You are not verified";
        if (gender == "male")
        {
            std::cout << "Okay you are not as a male";
        }
        else
        {
            std::cout << "Okay you are not verified as a female";
        }
    }

    return 0;
}