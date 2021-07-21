//
//  creature.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "common.hpp"


namespace co::creature_ns {

micro_co_is_kind_of(creature);

class creature : public base::property, public base::related_mission
{
public:
    creature(int id = 0,
         std::string name = "<untitled>") :
    base::property(id,
                  name)
    {
        
    }
    
    virtual ~creature() { }
    
private:

};


}
