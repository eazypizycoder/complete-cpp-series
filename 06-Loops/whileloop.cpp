#include <iostream>
int main()
{
    int x = 1; // starting point
    while (true)
    {
        // while loop body
        // if we dont add incremen.. so this loop goes infinite
        // x+=1;
        // x++;
        if (x == 10)
            break;
        std::cout << x << std::endl;
        // postfix prefer
        ++x;
    }
    std::cout << "loop is terminated";
    return 0;
}
