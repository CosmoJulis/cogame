//
//  base_related_quest.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include <unordered_set>


namespace co::base {

class related_quest {
protected:
    std::unordered_set<int> _related_quest_ids;
public:
    bool is_related(const int & quest_id) const;
};

}
