//
// Created by Manoloon on 01/02/2022.
//

#ifndef TESTCPP20_RANGES_H
#define TESTCPP20_RANGES_H
#include <ranges>
#include <vector>
#include <iostream>

// Ranges -> nothing works because this impl should use rangesV3 .
// convert each element into a pair of index and value
std::vector<double> scene_powers = {100,105,53,59.3,69,54,65};
auto face_powers = scene_powers | std::ranges::views::enumerate
                   // keep only elements where numbers are increase by >5 from previous
                   | std::ranges::views::adjacent_filter(
        [](const auto &p1,const auto &p2)
        {
            return p2.second - p1.second > 5;
        })
                   // drop the first value , its not significant.
                   | std::ranges::views::tail;

std::vector<int> ints{3,54,1,2,6132,21};
// pipeline
auto result = ints  | std::ranges::views::filter([](int i) {return i%2 == 0;}
                                                 | std::ranges::views::transform([](int i) {return std::to_string(i);});
std::cout << result << std::endl;
#endif //TESTCPP20_RANGES_H
