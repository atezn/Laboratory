/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

template <class T, class U>
double GetMax (T a, U b) {
 return (a<b?a:b);
}


int main()
{

    std::cout <<  GetMax(7.2, 8) << std::endl;
    std::cout <<  GetMax(12, 8) << std::endl;
    std::cout <<  GetMax(9.9, 8.6) << std::endl;

}
