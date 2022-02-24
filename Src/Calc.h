//
// Created by Manoloon on 24/02/2022.
//

#ifndef TESTCPP20_CALC_H
#define TESTCPP20_CALC_H
#include <iostream>
template<class T>
class Calc
        {
            T numA,numB;
public:
            Calc(T a,T b):numA(a),numB(b){};

            void displayResult()
            {
                std::cout << "Numbers: " << numA << " and " << numB << "." << std::endl;
                std::cout << numA << " + " << numB << " = " << add() << std::endl;
                std::cout << numA << " - " << numB << " = " << subst() << std::endl;
                std::cout << numA << " * " << numB << " = " << multiply() << std::endl;
                std::cout << numA << " / " << numB << " = " << divide() << std::endl;
            }

    T add(){return  numA + numB;};
    T subst(){return numA - numB;};
    T multiply() {return numA * numB;};
    T divide(){return numA/numB;};
        };
#endif //TESTCPP20_CALC_H
