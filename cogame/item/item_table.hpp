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
    boost::base_collection<item> items;
};

}
