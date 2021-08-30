//
//  quest_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest.hpp"


namespace co::quest_ns {

class table {
public:
    static table & get_global_table();
    
private:
    static void config_global_table(table * pt);
    
public:
    std::unordered_map<int, quest> quest_map;
};

}

