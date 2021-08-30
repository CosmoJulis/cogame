//
//  quest_reward.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"

namespace co {

namespace quest_ns {

class reward : public base::property {
public:
    reward(int id = 0);
    virtual ~reward();
    
protected:
    // TODO: 可能需要有序展示
    std::unordered_map<int, int> _item_id_count_map;

};

}

}
