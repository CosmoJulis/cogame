//
//  creature_table.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once

#include "common.hpp"
#include "creature.hpp"


namespace co::creature_ns {

class table {
public:
    boost::base_collection<creature> creatures;
};

}
