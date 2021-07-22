//
//  quest_target_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest_target.hpp"


namespace co::quest_ns {

class target_table {
public:
    static target_table & get_global_table();
private:
    static target_table * get_global_table_pointer();
    static void config_global_table(target_table * pt);
public:
    std::unordered_map<int, target> target_map;
};

}
