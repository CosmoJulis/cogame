//
//  item.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/19/21.
//

#pragma once

#include <unordered_set>
#include "common.hpp"


namespace co::item_ns {

micro_co_is_kind_of(item);

//class item_attribute;

class item : public base::property, public base::count, public base::related_mission
{
public:
    item(int id = 0,
         std::string name = "<untitled>",
         int number = 0) :
    base::property(id,
                  name),
    base::count(number)
    {
        
    }
    
    virtual ~item() { }
    
private:
    // item attribute
//    boost::base_collection<item_attribute> _attributes;
    
public:
    
public:
    
};



//class item_attribute {
//    
//};


}