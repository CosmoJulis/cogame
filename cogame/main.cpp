//
//  main.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#include <iostream>
#include <future>
#include <thread>
#include <chrono>
#include <atomic>
#include <any>

#include "common.hpp"
#include "mission_table.hpp"

#include "mission.hpp"

class A {
public:
    A() {
        std::cout << "cons\n";
    }
    
    A(const A & a) {
        std::cout << "copy cons\n";
    }
    
    A(A && a) {
        std::cout << "move cons\n";
    }
    ~A() {
        std::cout << "de cons\n";
    }
};

int main()
{

//    using namespace co::mission_ns;
//
//    mission m = mission(7);
//    table mt;
//    mt.missions.insert(m);
    std::cout << "start\n";
    {
        std::vector<std::shared_ptr<A>> va;
        for (int i = 0; i < 5; i++) {
            va.push_back(std::make_unique<A>(A()));
        }
    }
    std::cout << "end\n";

    
    
    return 0;
}
