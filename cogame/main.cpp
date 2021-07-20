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


//template <class T, class U>
//struct is_kind_of : public std::false_type {
//
//};
//
//template <class T>
//struct is_kind_of<T, T> : public std::true_type {
//
//};
//
//template<class T, class U>
//bool is_kind_of_v = is_kind_of<T, U>::value;


int main()
{
    auto mi = MyItem();
//    if (is_kind_of_item(mi)) {
//        std::cout << "is\n";
//    } else {
//        std::cout << "is not\n";
//
//    }
    
    if (std::is_base_of<co::item, MyItem>::value) {
        std::cout << "is base\n";
    } else {
        std::cout << "not base\n";
    }
//
    if (co::is_kind_of_v<int, int>) {
        std::cout << "same\n";
    } else {
        std::cout << "not same\n";
    }
//
    return 0;
}
