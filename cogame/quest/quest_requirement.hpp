//
//  quest_requirement.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"


namespace co {

namespace quest_ns {

class requirement : public base::property {
public:
    requirement(int id = 0);
    virtual ~requirement();
    
protected:
    std::unordered_map<int, int> _item_id_count_map;
    std::unordered_set<int> _quest_id_set;
    // 补充其他
    
public:
    bool is_checked() const;

};

}

}
