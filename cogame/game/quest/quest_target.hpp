//
//  quest_target.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"


namespace co {

namespace quest_ns {

class target : public base::property, public base::check {
public:
    target(int id = 0);
    virtual ~target();
    
protected:
    // TODO: 可能需要有序展示
    std::unordered_map<int, int> _item_id_count_map;
    std::unordered_map<int, int> _creature_id_count_map;
    std::unordered_set<int> _quest_id_set;
    
public:
    bool is_checked() const override;
    
};

}

}
