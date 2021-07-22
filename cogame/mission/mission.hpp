//
//  mission.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#pragma once

#include "common.hpp"
#include "mission_requirement.hpp"
#include "mission_target.hpp"
#include "mission_reward.hpp"


namespace co {

namespace mission_ns {

//class requirement;
//class target;
//class reward;

micro_co_is_kind_of(mission);

class mission : public base::property, public base::related_mission
{
public:

    mission(int id = 0,
            std::string name = "<untitled>");
    mission(const mission & m);
    virtual ~mission();
    
protected:

    // mission requirements
    std::vector<std::shared_ptr<requirement>> _requirements;
    // mission targets
    std::vector<std::shared_ptr<target>> _targets;
    // mission rewards
    std::vector<std::shared_ptr<reward>> _rewards;
public:
    virtual void logRequirement() const {
        for (const auto & r : _requirements) {
            r->logItems();
        }
    }
    
// 任务触发相关
public:
    
    // 能够触发
    virtual bool meet() const;
    
    
// 任务进度相关
public:

    // 任务与其相关联
    template <typename T>
    bool is_related(const T & t) const;
    
    // 更新任务的进度
    template <typename T>
    void update(const T & t);

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
    
    // 任务是否结束
    virtual bool is_end() const {
        return false;
    }
    
    // 任务结束
    virtual void end() {
        
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

}
