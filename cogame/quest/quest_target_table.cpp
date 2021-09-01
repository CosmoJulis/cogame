//
//  quest_target_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_target_table.hpp"


using namespace co;
using namespace quest_ns;

target_table & target_table::get_global_table()
{
    return *get_global_table_singleton();
}


target_table * target_table::get_global_table_singleton()
{
    static target_table * p = nullptr;
    if (p == nullptr) {
        p = new target_table();
        config_global_table(p);
    }
    return p;
}

void target_table::config_global_table(target_table * pt)
{
    // TODO:  加载所有任务目标
}
