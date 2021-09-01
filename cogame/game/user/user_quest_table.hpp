//
//  user_quest_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest.hpp"


namespace co::user {

class quest_table {
public:
    static quest_table & get_user_table();

private:
    static quest_table * get_user_table_singleton();

public:
    std::unordered_map<int, quest_ns::quest> quest_map;
};

}
