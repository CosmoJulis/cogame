//
//  mission_target.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "base.hpp"


namespace co::mission_ns {

class target : public base::property {
public:
    target(int id = 0);
    virtual ~target();
public:
    bool is_checked() const;
};

}
