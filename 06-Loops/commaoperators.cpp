#include <iostream>
int main()
{
    // comma operators

    int increment = 2;
    int num1 = 0;
    int num2 = 0;

    int result = (num1 *= ++increment, num2 - (++increment));
    std::cout << "result " << result << std::endl;
    std::cout << "num1 " << num1 << std::endl;
    std::cout << "num2 " << num2 << std::endl;

    return 0;
}