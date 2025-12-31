
// the difference between sizeof() and std::size()
// the simple array size and the varaible size/space

#include<iostream>
int main()
{
    // sizeof()
    /*
        sizeof() => operator (+ - * )
        wo kitni space take kar ka behta hai memory ka andr 

        std::size() => function c++17
        array []


    */

    // int a=10;
    // std::cout<<sizeof(a)<<" bytes\n";
    
    // int array[5]={1,2,3,4,5};
    // std::cout<<sizeof(array)/sizeof(array[0])<<" bytes";
    // kitny elements hai or kitny counts 
    

    // size() function


    int a[]{1,2,3,4,5,6,7,8};
    std::cout<<std::size(a)<<" elements"<<std::endl;
    std::cout<<sizeof(a)<<" bytes";
    return 0;
}