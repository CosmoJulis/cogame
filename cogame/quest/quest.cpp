//
//  quest.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "quest.hpp"


using namespace co;
using namespace base;
using namespace quest_ns;

quest::quest(int id, const std::string & name) :
property(type::quest, id, name)
{
    std::cout << "construct quest id: " << id << std::endl;
}

quest::~quest() { }

bool quest::is_meet() const
{
    if (_requirement_id > 0) {
        try {
            return requirement::load_from_id(_requirement_id).is_checked();
        } catch (exception & e) {
            return false;
        }
    }
    return true;
}

void quest::meet()
{
    
}

bool quest::is_related(const int & id) const
{
    return false;
}

void quest::update(const int & id) const
{
    
}

bool quest::is_checked() const
{
    return false;
}

void quest::check()
{
    
}

bool quest::has_reward() const
{
    return false;
}

void quest::get_reward(const int & reward_id)
{
    
}

bool quest::is_end() const
{
    return false;
}

void quest::end()
{
    
}

bool quest::has_next() const
{
    return false;
}

std::vector<int> quest::get_next() const
{
    return std::vector<int>();
}

bool quest::is_single_next() const
{
    return false;
}

void quest::next(std::vector<int> & quest_ids)
{
    
}

void quest::cancel()
{
    
}
