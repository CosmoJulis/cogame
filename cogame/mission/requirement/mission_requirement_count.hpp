//
//  mission_requirement_count.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once

#include "common.hpp"
#include "item.hpp"
#include "creature.hpp"
//#include "mission.hpp"


namespace co::mission_ns {

template <typename T>
class requirement_count {
public:
    requirement_count(T && t, int count) :
    _t(t), _count(count)
    { }
    
    virtual ~requirement_count() { }
    
    std::unique_ptr<T> get_entry() const {
        return std::make_unique<T>(_t);
    }

    int get_count() const {
        return _count;
    }
    
    bool is_checked() const {
        if constexpr (item_ns::is_kind_of_item_v<T>) {
            
        }
        else if (creature_ns::is_kind_of_creature_v<T>) {

        }
//        else if (mission_ns::is_kind_of_mission_v(T)) {
//        }
        return true;
    }

protected:
    const T & _t;
    const int _count;
    
};

template <typename T>
inline
constexpr
auto make_requirement_count(T && t, int i) {
    return std::forward<requirement_count<T>>(requirement_count<T>(std::forward<T>(t), i));
}

}
