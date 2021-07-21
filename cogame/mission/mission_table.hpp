//
//  mission_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"
#include "mission.hpp"


namespace co::mission_ns {

class table {
public:
    boost::base_collection<mission> missions;
};

}

