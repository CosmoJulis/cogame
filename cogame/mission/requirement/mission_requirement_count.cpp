//
//  mission_requirement_count.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#include "mission_requirement_count.hpp"
#include "item.hpp"
#include "creature.hpp"
#include "mission.hpp"
#include "user_item_table.hpp"
#include "user_mission_table.hpp"

using namespace co;
using namespace item_ns;
using namespace creature_ns;
using namespace mission_ns;
using namespace user;

template <typename T>
bool requirement_count<T>::is_checked() const {
    if constexpr (is_kind_of_item_v<T>) {
        item_table & it = *(item_table::get_table());
        for (const auto & i : it.items) {
            if (i.get_id() == _t.get_id()) {
                if (i.get_number() < _count) {
                    return false;
                }
            }
        }

    }
    else if (is_kind_of_creature_v<T>) {
        
    }
    else if (is_kind_of_mission_v<T>) {
        mission_table & mt = *(mission_table::get_table());
        for (const auto & m : mt.missions) {
            if (m.get_id() == _t.get_id()) {
                return m.is_end();
            }
        }
    }
    return true;
}


template class mission_ns::requirement_count<item>;
template class mission_ns::requirement_count<creature>;
template class mission_ns::requirement_count<mission>;
