//
//  base_count.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#pragma once

namespace co::base {

class count {
public:
    count(int c = 0) : _c(c) { }

protected:
    int _c;
    
public:
    void set_count(int c) {
        _c = c;
    }
    
    int get_count() const {
        return _c;
    }
    
    void increase_count(int c) {
        _c += c;
    }
    
    void decrease_cout(int c) {
        _c -= c;
    }
};

}
