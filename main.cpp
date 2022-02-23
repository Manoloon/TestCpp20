#include <vector>
#include <iostream>
#include "Src/findSecondInRange.h"
int main()
{
    std::vector<int> vecOfNums1{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
    std::vector<int> vecOfNums2{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
    std::vector<int> vecOfNums3{1,4,5};

    bool equal = std::equal(vecOfNums1.begin(),vecOfNums1.end(),vecOfNums2.begin(),vecOfNums2.end());
    std::cout << "is equal? " << (equal ? "YES" : "NOT") << std::endl;
    bool partialEqual = std::equal(vecOfNums3.begin(),vecOfNums3.end(),vecOfNums1.begin());
    std::cout << "is equal? " << (partialEqual ? "YES" : "NOT") << std::endl;

    auto m1 = findSecondInRange::findSecondLarger(vecOfNums2.begin(),vecOfNums2.end());
    std::cout << *m1;
    return 0;
}
