//
// Created by Manoloon on 01/02/2022.
//

#ifndef TESTCPP20_ATOMICTEST_H
#define TESTCPP20_ATOMICTEST_H
#include <thread>
#include <chrono>
#include <atomic>
#include <iostream>
#include <vector>


////////////////////////// Atomic ///////////////////////////////////////
namespace atomic
{
    using namespace std::chrono_literals;

    std::vector<double> daily_prices = {100.3,101.5,99.2,105.1,101.94,
                                        96.7,97.6,103.9,106,101.2};
    double average = 0.0;
    std::atomic_flag still_busy = true;

    std::thread Thread {
            [&daily_prices,&average, &still_busy]() {
                for(auto p: daily_prices) {
                    std::this_thread::sleep_for(2ms);
                    average +=p;
                }
                average /= daily_prices.size();
                still_busy.clear(std::memory_order_release);
                std::this_thread::sleep_for(2s);
            }
    };

    while(still_busy.test_and_set(std::memory_order_acquire))
{
    std::cout << "###";
    std::this_thread::sleep_for(1ms);
}
std::cout << "Average value : " << average << std::endl;
Thread.join();
////////////////////////// Atomic ///////////////////////////////////////
};


#endif //TESTCPP20_ATOMICTEST_H
