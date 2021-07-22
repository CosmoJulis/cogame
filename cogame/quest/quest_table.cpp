//
//  quest_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_table.hpp"


using namespace co;
using namespace quest_ns;

const table & table::get_global_table() const
{
    return *get_global_table();
}


const table * table::get_global_table_pointer()
{
    static table * p = nullptr;
    if (p == nullptr) {
        p = new table();
        config_global_table(p);
    }
    return p;
}

void talbe::config_global_table(table * pt)
{
    // TODO:  加载所有任务
}
