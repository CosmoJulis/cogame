//
//  quest_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest.hpp"


namespace co::quest_ns {

class table {
public:
    const table & get_global_table() const;
private:
    static const table * get_global_table_pointer();
    static void config_global_table(table * pt);
public:
    std::unordered_map<int, quest> all_quest;
};

}

