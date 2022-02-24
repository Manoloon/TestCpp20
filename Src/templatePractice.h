//
// Created by Manoloon on 24/02/2022.
//

#ifndef TESTCPP20_TEMPLATEPRACTICE_H
#define TESTCPP20_TEMPLATEPRACTICE_H

#include <iostream>
namespace templatePractice
{
    template<typename T>
    T myMax(T x, T y)
    {
        return (x>y) ? x:y;
    }
    template<typename T>
    T myMin(T x, T y)
    {
        return (x<y)? x : y;
    }

    // Class Template
    template <class T>
    class ClassTemp
            {
        // Complete the class.Make a private variable,constructors and method called
        // check() which takes one parameter and prints the output in new line.
    private:
                T varX;
    public:
                //constructor
        ClassTemp(T x):varX(x){};

                T GetValue()
                {
                    return varX;
                }
            };
}
#endif //TESTCPP20_TEMPLATEPRACTICE_H
