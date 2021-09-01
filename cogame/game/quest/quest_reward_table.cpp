//
//  quest_reward_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_reward_table.hpp"


using namespace co;
using namespace quest_ns;

reward_table & reward_table::get_global_table()
{
    return *get_global_table_singleton();
}


reward_table * reward_table::get_global_table_singleton()
{
    static reward_table * p = nullptr;
    if (p == nullptr) {
        p = new reward_table();
        config_global_table(p);
    }
    return p;
}

void reward_table::config_global_table(reward_table * pt)
{
    // TODO:  加载所有奖励
}
