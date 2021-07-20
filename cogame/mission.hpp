//
//  mission.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#pragma once

#include <boost/poly_collection/base_collection.hpp>

namespace co {

class mission_trigger;
class mission_target;
class mission_reward;

class mission {
public:
    mission(int id) : _id(id) {
        // 读取配置列表
        // 根据id 配置 triggers targets rewards
    }
    
    virtual ~mission() { }
    
private:
    // mission id
    int _id = 0;
    
    // mission trigger
    boost::base_collection<mission_trigger> _triggers;
    
    // mission targets
    boost::base_collection<mission_target> _targets;
    
    // mission rewards
    boost::base_collection<mission_reward> _rewards;
    
public:
    virtual bool trigger() = 0;
    

public:
    // TODO: 快速判断是否此任务update和当前是否相关
    template <typename T>
    bool is_related(T t) {
        if constexpr (std::is_integral_v<T>) {
            
        } else {
            
        }
    }
    
    virtual void update() = 0;
    
public:
    virtual bool complete() = 0;
    
public:
    virtual bool has_reward() = 0;
    virtual void reward() = 0;
    
public:
    virtual std::unique_ptr<mission> next() {
        return nullptr;
    }
};

template <typename T>
constexpr
inline bool is_kind_of_mission(const T & t) {
    return is_kind_of<T, mission>(t);
}


class mission_trigger {
    
};

class mission_target {
    
};

class mission_reward {
    // TODO: reward 对应 单个奖励
    // TODO: 支持奖励多选一
};




class mission_table {
public:
    
    boost::base_collection<mission> missions;
    
};

}
