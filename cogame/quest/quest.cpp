//
//  quest.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest.hpp"


using namespace co;
using namespace base;
using namespace quest_ns;

quest::quest(int id, const std::string & name) :
property(id, name)
{
    
}

quest::~quest() { }
