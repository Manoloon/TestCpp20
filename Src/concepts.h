//
// Created by Manoloon on 25/02/2022.
//

#ifndef TESTCPP20_CONCEPTS_H
#define TESTCPP20_CONCEPTS_H
#include <concepts>
#include <iostream>

namespace conceptsTest
{
    // concepts set constrains and make more readable template`s outcomes with the type is not right.
    template<class T>
    double Sum(T& items)
           {
              double sum=0;
             for(auto &item : items)
             {
                sum+=item;
             }
               return sum;
            };

    // template with concept.
    template<class U>
    concept Array = std::is_array<U>::value;
    template<Array T>
    double SumArray(T& items)
    {
        double sum=0;
        for(auto &item : items)
        {
            sum+=item;
        }
        return sum;
    };
    class ConceptActor
            {
    private:
                int OnlyANum = 3;
                int ArrayNums[3]={1,2,3};
    public:
                void Test1()
                {
                    std::cout << "the value is an array of ints" << conceptsTest::Sum(ArrayNums) << std::endl;
                }
                void TestConcept()
                {
                    std::cout << "the value is checked by concept(array) : " << conceptsTest::SumArray(ArrayNums) << std::endl;
                }
            };
}
#endif //TESTCPP20_CONCEPTS_H
