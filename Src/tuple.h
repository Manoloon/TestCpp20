//
// Created by Manoloon on 24/02/2022.
//
#ifndef TESTCPP20_TUPLE_H
#define TESTCPP20_TUPLE_H
#include <iostream>
#include <string_view>
#include <tuple>
namespace practiceTuple
{
    // tuple basic
    void tupleBasic()
    {
        std::tuple <int,float,std::string_view> TupleBag(3,2.4,"HOLA");
        std::cout << "data by type : string_view =" << std::get<std::string_view>(TupleBag) << std::endl;
        // tuple deducted (c++ 17)
        std::tuple MagicTuple(3,3.4,"Pablo",-4);
        // get data by index
        std::cout <<  "data by index: 3 =" << std::get<3>(MagicTuple) << std::endl;
    }
}
#endif //TESTCPP20_TUPLE_H
