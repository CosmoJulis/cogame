//
//  base_property.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include <iostream>


namespace co {

namespace base {

enum class type {
    item,
    quest,
    quest_requirement,
    quest_target,
    quest_reward,
    creature,
    unknown,
};


class property {
public:
    template <typename T>
    static const T & load_from_id(const int & id);
public:
    property(type type = type::unknown,
             int id = 0,
             std::string name = "<untitled>") :
    _type(type),
    _id(id),
    _name(name)
    {
        std::cout << "property id = " << id << std::endl;
    }
    
    virtual ~property() { }
    
protected:
    type _type;
    int _id;
    std::string _name;
    
public:
    virtual type get_type() const
    {
        return _type;
    }
    
    virtual int get_id() const
    {
        return _id;
    }
    
    virtual std::string get_name() const
    {
        return _name;
    }
};

}

}
