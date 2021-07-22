//
//  quest.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

#include "common.hpp"
#include "quest_requirement.hpp"
#include "quest_target.hpp"
#include "quest_reward.hpp"


namespace co::quest_ns {

class quest : public base::property, public base::related_quest
{
public:
    quest(int id = 0, const std::string & name = "<untitled>");
    virtual ~mission();
    
protected:
    int _requirement_id = 0;
    int _target_id = 0;
    int _reward_id = 0;
    
public:
    virtual bool meet() const;
    
    virtual bool is_related(const int & id) const;
    virtual void update(const int & id) const;
    
    virtual bool is_complete() const;
    virtual void check();
    
    virtual bool has_reward() const;
    virtual void get_reward(const int & reward_id);
    
    virtual bool is_end() const;
    virtual void end();
    
    virtual bool has_next() const;
    virtual std::vector<int> get_next() const;
    virtual bool is_single_next() const;
    virtual void next(std::vector<int> & mission_ids);
    
    virtual void cancel();
};

}
