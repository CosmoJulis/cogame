//
//  item_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "item_table.hpp"


using namespace co;
using namespace item_ns;

table & table::get_global_table()
{
<<<<<<< HEAD:cogame/item/item_table.cpp
    return *get_global_table_singleton();
}


table * table::get_global_table_singleton()
{
=======
>>>>>>> a4eeddb06e6946b1c67a3bc2fc9f7fbe9271fbd9:cogame/game/item/item_table.cpp
    static table * p = nullptr;
    if (p == nullptr) {
        p = new table();
        config_global_table(p);
    }
    return *p;
}

void table::config_global_table(table * pt)
{
    // TODO:  加载所有物品
}
