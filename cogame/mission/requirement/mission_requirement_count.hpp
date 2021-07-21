//
//  mission_requirement_count.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once

#include "common.hpp"



namespace co {

namespace item_ns { class item; }
namespace creature_ns { class creature; }

namespace mission_ns {

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

    bool is_checked() const;


protected:
    const T & _t;
    const int _count;
};


template <typename T>
inline
constexpr
auto make_requirement_count(T && t, int count) {
    return std::forward<requirement_count<T>>(requirement_count<T>(std::forward<T>(t), count));
}

}

}

