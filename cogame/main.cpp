//
//  main.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#include <iostream>
#include "mission.hpp"
#include <future>
#include <thread>
#include <chrono>
#include <atomic>
#include <any>

#include "common.hpp"
#include "item.hpp"
class MyItem : public co::item {
    using co::item::item;
};



int main()
{
    if (co::is_kind_of_item_v<MyItem>) {
        std::cout << "same\n";
    } else {
        std::cout << "not same\n";
    }
//
    return 0;
}
