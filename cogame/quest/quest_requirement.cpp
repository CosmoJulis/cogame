//
//  quest_requirement.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest_requirement.hpp"
#include "item_table.hpp"
#include "quest_table.hpp"


using namespace co;
using namespace base;
using namespace quest_ns;

requirement::requirement(int id) :
property(type::quest_requirement, id)
{

}

requirement::~requirement() { }

bool requirement::is_checked() const
{
    // TODO: item map checked
    
    quest_ns::table & quest_table = quest_ns::table::get_global_table();
    for (const int & quest_id : _quest_id_set) {
        if (quest_table.quest_map.contains(quest_id)) {
            const quest & q = quest_table.quest_map[quest_id];
            return !q.is_end();
        }
    }
    
    
    return true;
}
