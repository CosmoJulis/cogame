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
    static item_table * get_table();
private:
    item_table() { };
public:
    boost::base_collection<item_ns::item> items;
};

}
