//
//  creature.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"

namespace co {

class creature {
public:
    creature() { }
    
    creature(int id) : _id(id) { }
    
    virtual ~creature() { }
    
private:
    // creature id
    int _id = 0;
    
    // 
};

template <typename T>
constexpr
inline bool is_kind_of_creature(const T & t) {
    return is_kind_of<T, creature>(t);
}




}
