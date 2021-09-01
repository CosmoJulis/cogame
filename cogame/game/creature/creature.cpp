//
//  creature.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "creature.hpp"


using namespace co;
using namespace base;
using namespace creature_ns;

creature::creature(int id, const std::string & name) :
property(type::creature, id, name)
{
    std::cout << "construct creature id: " << id << std::endl;
}

creature::~creature() { }
