//
//  user_mission_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"
#include "mission.hpp"


namespace co::user {

class mission_table {
public:
    static mission_table * get_table();
private:
    mission_table() { }
public:
    boost::base_collection<mission_ns::mission> missions;
};

}
