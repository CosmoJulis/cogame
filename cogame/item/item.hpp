//
//  item.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/19/21.
//

#pragma once

#include "common.hpp"


namespace co::item_ns {

class item : public base::property, public base::count, public base::related_quest
{
public:
    item(int id = 0, const std::string & name = "<untitled>");
    virtual ~item();
    
};

}
