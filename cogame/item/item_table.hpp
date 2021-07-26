//
//  item_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"
#include "item.hpp"


namespace co::item_ns {

class table {
public:
    static table & get_global_table();
    
private:
    static void config_global_table(table * pt);
    
public:
    std::unordered_map<int, item> item_map;
};

}
