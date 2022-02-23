//
// Created by Manoloon on 23/02/2022.
//

#ifndef TESTCPP20_PARALLELTASK_H
#define TESTCPP20_PARALLELTASK_H
//using stl in parallel
#include <vector>
#include <numeric>
#include <execution>
#include <iostream>
#include <cmath>
namespace parallel
{
    void run()
    {
        std::vector<double> daily_rewards1 = {100.3,101.5,99.2,105.1,101.94,
                                              96.7,97.6,103.9,106,101.2};

// calculate average in parallel -> reduce is like accumulate but run in parallel.
        auto NewAverage = std::reduce(std::execution::par,
                                      daily_rewards1.begin(),
                                      daily_rewards1.end())
                          / daily_rewards1.size();
// result would be 101.344
        std::cout << "Average " << NewAverage << std::endl;

/// Does the same that inner_product but parallelize
        auto sum_squares = std::transform_reduce(
                std::execution::par,
                daily_rewards1.begin(),
                daily_rewards1.end(),
                0.0,
                [](double lhs,double rhs)
                {
                    return lhs + rhs;
                },
                [NewAverage](double price)
                {
                    // distance from average
                    auto distance = price - NewAverage;
                    return distance * distance;
                }
        );
        auto stdDev = sqrt(sum_squares/daily_rewards1.size());
//Result : Standard deviation : 2.89811
        std::cout << "Standard Deviation : " << stdDev << std::endl;
    };
}

#endif //TESTCPP20_PARALLELTASK_H
