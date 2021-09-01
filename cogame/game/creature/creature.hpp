//
//  creature.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"


namespace co::creature_ns {

class creature : public base::property, public base::related_quest
{
public:
    creature(int id = 0, const std::string & name = "<untitled>");
    virtual ~creature();
    
private:

};


}
