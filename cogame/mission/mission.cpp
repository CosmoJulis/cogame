//
//  mission.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#include "mission.hpp"


using namespace co;
using namespace base;
using namespace mission_ns;

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
        _requirements.insert(requirement(7));

        // target 17 x item_7
        _targets.insert(target(7));
        
        _rewards.insert(reward(7));
    }
}

mission::~mission() { }

bool mission::meet() const {
    for (const auto & rqm : _requirements) {
        if (!rqm.is_checked()) return false;
    }
    return true;
}
