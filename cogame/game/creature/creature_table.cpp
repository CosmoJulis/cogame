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
<<<<<<< HEAD:cogame/creature/creature_table.cpp
    return *get_global_table_singleton();
}


table * table::get_global_table_singleton()
{
=======
>>>>>>> a4eeddb06e6946b1c67a3bc2fc9f7fbe9271fbd9:cogame/game/creature/creature_table.cpp
    static table * p = nullptr;
    if (p == nullptr) {
        p = new table();
        config_global_table(p);
    }
    return *p;
}

void table::config_global_table(table * pt)
{
    // TODO:  加载所有生物
}
