//
//  quest_reward_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest_reward.hpp"


namespace co::quest_ns {

class reward_table {
public:
    static reward_table & get_global_table();
    
private:
    static void config_global_table(reward_table * pt);
    
public:
    std::unordered_map<int, reward> reward_map;
};

}
