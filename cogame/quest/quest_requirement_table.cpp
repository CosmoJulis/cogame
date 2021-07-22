//
//  quest_requirement_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_requirement_table.hpp"


using namespace co;
using namespace quest_ns;

requirement_table & requirement_table::get_global_table()
{
    return *get_global_table_pointer();
}


requirement_table * requirement_table::get_global_table_pointer()
{
    static requirement_table * p = nullptr;
    if (p == nullptr) {
        p = new requirement_table();
        config_global_table(p);
    }
    return p;
}

void requirement_table::config_global_table(requirement_table * pt)
{
    // TODO:  加载所有任务
}
