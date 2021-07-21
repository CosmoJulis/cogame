//
//  mission_requirement.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"
#include "mission_requirement_count.hpp"
#include "item.hpp"
#include "creature.hpp"
//#include "mission.hpp"


namespace co::mission_ns {

class requirement : public base::property {
    
    // TODO
    /*
        前期任务需求
        物品需求
        等级需求
        金钱需求
        通过虚继承可拓展需求
     */
public:
    requirement(int id = 0);
    virtual ~requirement();

protected:
    boost::base_collection<requirement_count<mission_ns::mission>> _missions;
    boost::base_collection<requirement_count<item_ns::item>> _items;
    boost::base_collection<requirement_count<creature_ns::creature>> _creatures;
    
public:
    bool is_checked() const;
};

}
