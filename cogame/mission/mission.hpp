//
//  mission.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#pragma once

#include "common.hpp"
#include "item.hpp"
#include "creature.hpp"
#include "mission_requirement.hpp"
#include "mission_target.hpp"
#include "mission_reward.hpp"


namespace co::mission_ns {

micro_co_is_kind_of(mission);

class mission : public base::property, public base::related_mission
{
public:

    mission(int id = 0,
            std::string name = "<untitled>");
    virtual ~mission();
    
protected:

    // mission trigger
    boost::base_collection<requirement> _requirements;
    
    // mission targets
    boost::base_collection<target> _targets;
    
    // mission rewards
    boost::base_collection<reward> _rewards;
    
// 任务触发相关
public:
    
    // 能够触发
    virtual bool meet() const;
    
    
// 任务进度相关
public:

    // 任务与其相关联
    template <typename T>
    bool is_related(const T & t) const {
        if constexpr (item_ns::is_kind_of_item_v<T> ||
                      creature_ns::is_kind_of_creature_v<T> ||
                      mission_ns::is_kind_of_mission_v<T> ) {
            return t.is_related_mission(get_id());
        } else {
            return false;
        }
    }
    
    // 更新任务的进度
    template <typename T>
    void update(const T & t) {
        std::cout << "进度更新\n";
        if constexpr (item_ns::is_kind_of_item_v<T>) {
            
        } else if (creature_ns::is_kind_of_creature_v<T>) {
        
        } else if (mission_ns::is_kind_of_mission_v<T>) {
        
        } else {
        
        }
    }

// 任务完成相关
public:
    
    // 任务是否完成
    virtual bool is_complete() {
        return false;
    }
    
    // 勾选完成
    virtual void check_complete() {
        
    }

// 任务奖励相关
public:
    
    // 任务是否有奖励
    virtual bool has_reward() {
        return false;
    }
    
    // 获取任务奖励
    virtual void get_reward() {
        
    }
    
// 任务关闭相关
public:
    
    // 任务关闭
    virtual void close() {
        
    }
    
    // 后续任务
    virtual std::unique_ptr<mission> next() {
        return nullptr;
    }

// 任务取消相关
public:
    
    // 任务取消
    virtual void cancel() {
        
    }

};

}
