//
//  mission_requirement.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "mission_requirement.hpp"
#include "user_item_table.hpp"
#include "mission_requirement_count.hpp"


using namespace co;
using namespace base;
using namespace mission_ns;
using namespace item_ns;

requirement::requirement(int id) :
property(id)
{
    // debug
    if (id == 7) {
        _items.insert(make_requirement_count(item(7), 7));
    }
}

requirement::~requirement() {
    
}

bool requirement::is_checked() const {
//    if () {
        // TODO: user_item_table find items count > req.item.count
//    }
    if (_missions.size() > 0) {
        for (const auto & mc : _missions) {
//            if (!mc.is_checked()) return false;
        }
    }
    
    if (_items.size() > 0) {
        for (const auto & ic : _items) {
            if (!ic.is_checked()) return false;
        }
    }
    
    if (_creatures.size() > 0) {
        for (const auto & cc : _creatures) {
            if (!cc.is_checked()) return false;
        }
    }
    
    return true;
}
