//
//  base_description.hpp
//  cogame
//
//  Created by Cosmo Julis on 8/27/21.
//

#pragma once
#include <iostream>


namespace co::base {


class description {
public:

    friend std::ostream & operator<<(std::ostream & os, const description & d)
    {
        return os << d.message();
    }

    virtual std::string message() const = 0;

};

}

