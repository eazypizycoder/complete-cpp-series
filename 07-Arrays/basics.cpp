#include <iostream>
int main()
{
    // simple varaible
    // int a = 10;
    // std::cout << a;
    

    // array different sizes of boxes

    const int array [4] {1,2,3,4};
    
    
    // range loop
    // for (auto a :array)
    // {
    //     std::cout<<a;
        
    // }
    // std::cout<<array[3];
    
    for (size_t i = 0; i < 4; i++)
    {
        std::cout<<array[i]<<std::endl;
    }
    
    return 0;
}