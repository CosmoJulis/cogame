//
//  user_item_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "user_item_table.hpp"


using namespace co;
using namespace user;

item_table * item_table::get_table()
{
    static item_table * p = new item_table();
    return p;
}

