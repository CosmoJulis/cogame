//
//  quest_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_table.hpp"


using namespace co;
using namespace quest_ns;

table & table::get_global_table()
{
    static table * p = nullptr;
    if (p == nullptr) {
        p = new table();
        config_global_table(p);
    }
    return *p;
}

void table::config_global_table(table * pt)
{
    // TODO:  加载所有任务
}
