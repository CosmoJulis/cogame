//
//  base_property.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "base_property.hpp"
#include "common.hpp"
#include "quest_table.hpp"
#include "quest_requirement_table.hpp"
#include "item_table.hpp"
#include "creature_table.hpp"


using namespace co;
using namespace base;
using namespace quest_ns;
using namespace item_ns;
using namespace creature_ns;

template <typename T>
const T & property::load_from_id(const int & id)
{
    if constexpr (std::is_base_of_v<item, T>) {
        auto & table = item_ns::table::get_global_table();
        if (table.item_map.contains(id)) {
            return table.item_map[id];
        }
    }
    else if constexpr (std::is_base_of_v<quest, T>) {
        auto & table = quest_ns::table::get_global_table();
        if (table.quest_map.contains(id)) {
            return table.quest_map[id];
        }
    }
    else if constexpr (std::is_base_of_v<requirement, T>) {
        auto & table = requirement_table::get_global_table();
        if (table.requirement_map.contains(id)) {
            return table.requirement_map[id];
        }
    }
    else if constexpr (std::is_base_of_v<target, T>) {

    }
    else if constexpr (std::is_base_of_v<reward, T>) {

    }
    else if constexpr (std::is_base_of_v<creature, T>) {
        auto & table = creature_ns::table::get_global_table();
        if (table.creature_map.contains(id)) {
            return table.creature_map[id];
        }
    }
    throw exception(std::string("not find id: ") + std::to_string(id));
}


template const quest & property::load_from_id(const int & id);
template const requirement & property::load_from_id(const int & i);
template const item & property::load_from_id(const int & id);
template const creature & property::load_from_id(const int & id);
