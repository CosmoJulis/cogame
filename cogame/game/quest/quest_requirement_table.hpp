//
//  quest_requirement_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest_requirement.hpp"


namespace co::quest_ns {

class requirement_table {
public:
    static requirement_table & get_global_table();
    
private:
    static void config_global_table(requirement_table * pt);
    
public:
    std::unordered_map<int, requirement> requirement_map;
};

}
