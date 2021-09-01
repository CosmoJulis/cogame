//
//  user_item_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "user_item_table.hpp"


using namespace co::user;

item_table & item_table::get_user_table()
{
    return *get_user_table_singleton();
}


item_table * item_table::get_user_table_singleton()
{
    static item_table * p = new item_table();
    return p;
}
