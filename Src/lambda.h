//
// Created by Manoloon on 27/02/2022.
//

#ifndef TESTCPP20_LAMBDA_H
#define TESTCPP20_LAMBDA_H
#include <iostream>
namespace lambda
{
    //basic
    auto sum = [](auto a,auto b){return a+b;};
    void PrintSum(int a,int b)
    {
        std::cout << sum(a,b) << std::endl;
    }
}
#endif //TESTCPP20_LAMBDA_H
