//
//  user_mission_table.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "user_mission_table.hpp"


using namespace co;
using namespace user;

mission_table * mission_table::get_table()
{
    static mission_table * p = new mission_table();
    return p;
}

