//
//  item.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/19/21.
//

#include "item.hpp"


using namespace co;
using namespace base;
using namespace item_ns;

item::item(int id, const std::string & name) :
property(type::item, id, name)
{
    std::cout << "construct item id: " << id << std::endl;
}

item::~item() { }
