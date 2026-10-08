/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

template <class T, class U>
double Smaller (T a, U b) {
 return (a<b?a:b);
}


int main()
{

    std::cout <<  Smaller(7.2, 8) << std::endl;
    std::cout <<  Smaller(12, 8) << std::endl;
    std::cout <<  Smaller(9.9, 8.6) << std::endl;

}
