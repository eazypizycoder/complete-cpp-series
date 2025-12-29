#include <iostream>
#include <bitset>
int main()
{
    /*

    Decimals = 0-9
    Hexa ,binary,Octals
    */

        int decimal{15};
    //     // Decimal =>15

        int octal{015};
    //     // octal
    // // A=10,B=11
    // // for Hexa 0x

        int hexa{0xf};
    //     //
    //     // 1 byte =8 bits
        int binary{0b00001111};
    //     // binary 0b
        std::cout << "Decimal " << decimal << std::endl;
        std::cout << "Octal " << octal << std::endl;
        std::cout << "Hexa " << hexa << std::endl;
        
        std::cout << "binary " << binary << std::endl;



    // 1 byte=8 bits =32 bits
    // int 4 byte binary 1111
    int number{15};
    std::cout << number << "\n"<< std::bitset<32>(number) << std::endl;
    std::cout << number << "\n"<<std::showbase<< std::hex << number << std::endl;
    std::cout << number << "\n"<<std::showbase<< std::oct << number << std::endl;
    return 0;
}