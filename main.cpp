#include <vector>
#include <iostream>
#include <string_view>
#include <tuple>
#include "Src/findSecondInRange.h"
#include "Src/templatePractice.h"
#include "Src/Calc.h"
#include "Src/concepts.h"
#include "Src/lambda.h"

class A{};

int main()
{
    conceptsTest::ConceptActor Actor;
    Actor.TestConcept();

    lambda::PrintSum(3,3);

    /////////////////////////////////////////////
    /**
    std::vector<int> vecOfNums1{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
    std::vector<int> vecOfNums2{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
    std::vector<int> vecOfNums3{1,4,5};

    bool equal = std::equal(vecOfNums1.begin(),vecOfNums1.end(),vecOfNums2.begin(),vecOfNums2.end());
    std::cout << "is equal? " << (equal ? "YES" : "NOT") << std::endl;
    bool partialEqual = std::equal(vecOfNums3.begin(),vecOfNums3.end(),vecOfNums1.begin());
    std::cout << "is equal? " << (partialEqual ? "YES" : "NOT") << std::endl;

    auto m1 = findSecondInRange::findSecondLarger(vecOfNums2.begin(),vecOfNums2.end());
    std::cout << *m1 << std::endl;
    // template test
    std::cout << "max ? " << templatePractice::myMax(12.12f,1100.121f) << std::endl;
    std::cout << "min ? " << templatePractice::myMin(12.12f,1100.121f) << std::endl;
    std::cout << "max size in vector ? " << templatePractice::myMax(vecOfNums1.size(),vecOfNums3.size()) << std::endl;

    // TEST Class Template
    templatePractice::ClassTemp<int> classA(7);
    std::cout << "class A :" << classA.GetValue() << std::endl;
    templatePractice::ClassTemp<std::string_view> classB("Pablo");
    std::cout << "class b :" << classB.GetValue() << std::endl;

    // Test simple calc
    Calc<float> FloatCalc(3.2,3.4);
    FloatCalc.add();
    FloatCalc.displayResult();*/
    return 0;
}
