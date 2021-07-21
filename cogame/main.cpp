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



int main()
{

    using namespace co::mission_ns;
    
    mission m = mission(7);
    table mt;
    mt.missions.insert(m);



    

    
    
    return 0;
}
