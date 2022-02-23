//
// Created by Manoloon on 23/02/2022.
//

#ifndef TESTCPP20_FINDSECONDINRANGE_H
#define TESTCPP20_FINDSECONDINRANGE_H

#include <iterator>
namespace findSecondInRange
{
    template<typename Iter>
    Iter findSecondLarger(Iter begin,Iter end)
    {
        if(begin == end) return end;
        if(std::distance(begin,end)==1) return begin;

        auto max1 = begin++;
        auto max2 = begin++;
        if(*max1 < *max2)
            std::swap(max1,max2);

        for(auto it=begin;it!=end;++it)
        {
            if(*it > *max1)
            {
                max2 = max1;
                max1 = it;
            }
            else if(*it > *max2 && *it < *max1)
            {
                max2 = it;
            }
        }
        return max2;
    }
}
#endif //TESTCPP20_FINDSECONDINRANGE_H
