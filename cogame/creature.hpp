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
struct is_kind_of_creature : public is_kind_of<T, creature> { };

template <typename T>
inline
constexpr
bool is_kind_of_creature_v = is_kind_of_v<T, creature>;




}
