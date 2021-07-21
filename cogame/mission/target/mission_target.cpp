//
//  mission_target.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "mission_target.hpp"


using namespace co;
using namespace base;
using namespace mission_ns;

target::target(int id) :
property(id)
{
    
}

target::~target() {
    
}

bool target::is_checked() const {
    return false;
}
