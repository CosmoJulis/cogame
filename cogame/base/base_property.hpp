//
//  base_property.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include <string>


namespace co {

namespace base {

class property {
public:
    property(int id = 0,
                  std::string name = "<untitled>") :
    _id(id),
    _name(name)
    { }
protected:
    int _id;
    std::string _name;
public:
    int get_id() const {
        return _id;
    }
    std::string get_name() const {
        return _name;
    }
};

}

}
