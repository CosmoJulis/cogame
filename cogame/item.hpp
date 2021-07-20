//
//  item.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/19/21.
//

#pragma once

#include "common.hpp"
#include <boost/poly_collection/base_collection.hpp>

namespace co {

class item_attribute;

class item {
public:
    item() { }
    
    item(int id) : _id(id) { }
    
    virtual ~item() { }
    
private:
    // item id
    int _id = 0;
    
    // item attribute
    boost::base_collection<item_attribute> _attributes;
    
};

template <typename T>
constexpr
inline bool is_kind_of_item(const T & t) {
    return is_kind_of<T, item>(t);
}

class item_attribute {
    
};

}
