//
//  user_quest_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "user_quest_table.hpp"


using namespace co::user;

quest_table & quest_table::get_user_table()
{
    return *get_user_table_pointer();
}


quest_table * quest_table::get_user_table_pointer()
{
    static quest_table * p = new quest_table();
    return p;
}
