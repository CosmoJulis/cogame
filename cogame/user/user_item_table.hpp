//
//  user_item_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"
#include "item.hpp"


namespace co::user {

class item_table {
public:
    static item_table & get_user_table();
private:
    static item_table * get_user_table_pointer();
public:
    std::unordered_map<int, item_ns::item> item_map;
};

}
