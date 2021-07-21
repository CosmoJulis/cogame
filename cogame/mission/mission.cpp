//
//  mission.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#include "mission.hpp"
#include "mission_requirement.hpp"
#include "mission_target.hpp"
#include "mission_reward.hpp"
#include "item.hpp"
#include "creature.hpp"

using namespace co;
using namespace base;
using namespace mission_ns;
using namespace item_ns;
using namespace creature_ns;

mission::mission(int id,
                 std::string name) :
property(id,
         name)
{
    /*  读取配置列表
        配置 id, name
        配置 关联任务
        配置 triggers
        配置 targets
        配置 rewards
     */
    
    // debug
    if (id == 7) {
        _id = 7;
        _name = "mission_7";
        
        _related_mission_ids.insert(7);
        
        // require 7 x item_7
        _requirements.push_back(std::make_unique<requirement>(requirement(7)));

        // target 17 x item_7
        _targets.push_back(std::make_unique<target>(target(7)));
        
        _rewards.push_back(std::make_unique<reward>(reward(7)));
    }
}

mission::~mission() { }

bool mission::meet() const {
    for (const auto & rqm : _requirements) {
        if (!rqm->is_checked()) return false;
    }
    return true;
}

template <typename T>
bool mission::is_related(const T & t) const {
    if constexpr (is_kind_of_item_v<T> ||
                  is_kind_of_creature_v<T> ||
                  is_kind_of_mission_v<T> ) {
        return t.is_related_mission(get_id());
    } else {
        return false;
    }
}

template <typename T>
void mission::update(const T & t) {
    std::cout << "进度更新\n";
    if constexpr (is_kind_of_item_v<T>) {
        
    } else if (is_kind_of_creature_v<T>) {
    
    } else if (is_kind_of_mission_v<T>) {
    
    } else {
    
    }
}

