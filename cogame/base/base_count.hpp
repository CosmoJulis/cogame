//
//  base_count.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once


namespace co::base {

class count {
public:
    count(int number) : _number(number) { }
protected:
    int _number;
public:
    void set_number(int number) {
        _number = number;
    }
    
    int get_number() const {
        return _number;
    }
};

}
