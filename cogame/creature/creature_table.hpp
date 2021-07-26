//
//  creature_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once

#include "common.hpp"
#include "creature.hpp"


namespace co::creature_ns {

class table {
public:
    static table & get_global_table();

private:
    static void config_global_table(table * pt);
    
public:
    std::unordered_map<int, creature> creature_map;
};

}
