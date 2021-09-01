//
//  creature_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#include "creature_table.hpp"


using namespace co;
using namespace creature_ns;

table & table::get_global_table()
{
    return *get_global_table_singleton();
}


table * table::get_global_table_singleton()
{
    static table * p = nullptr;
    if (p == nullptr) {
        p = new table();
        config_global_table(p);
    }
    return p;
}

void table::config_global_table(table * pt)
{
    // TODO:  加载所有生物
}
