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
//        _item_ids.push_back(make_requirement_count<item>(7, 7));
//        _items.insert(make_requirement_count<item>(item(7), 7));
        _items.insert(requirement_count<item>(item(7), 7));
    }
}

requirement::requirement(const requirement & r) :
property(r)
{
    _items = r._items;
    _creatures = r._creatures;
    _missions = r._missions;
}


requirement::~requirement() {
    
}

bool requirement::is_checked() const {
    
//    if (_mission_ids.size() > 0) {
//        for (const auto & mc : _mission_ids) {
//            if (!mc.is_checked()) return false;
//        }
//    }
//
//    if (_item_ids.size() > 0) {
//        for (const auto & ic : _item_ids) {
//            if (!ic.is_checked()) return false;
//        }
//    }
//
//    if (_creature_ids.size() > 0) {
//        for (const auto & cc : _creature_ids) {
//            if (!cc.is_checked()) return false;
//        }
//    }
    
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
    
    if (_missions.size() > 0) {
        for (const auto & mc : _missions) {
            if (!mc.is_checked()) return false;
        }
    }
    
    return true;
}


void requirement::logItems() const {
    for (const auto & i : _items) {
        std::cout << "need item: " << i.get_id() << ", count: " << i.get_count() << std::endl;
    }
}
