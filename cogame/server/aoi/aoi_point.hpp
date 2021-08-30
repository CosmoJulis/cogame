//
//  point.hpp
//  cogame
//
//  Created by Cosmo Julis on 8/27/21.
//

#pragma once
#include "base.hpp"
#include "vector.hpp"


namespace co::aoi {

class point : public base::description {
public:
    point(int id = 0) : _id(id) { }
    
    void update(vector<float, 3> v3f) {
        _v3f = v3f;
    }
    
private:
    int _id;
    vector<float, 3> _v3f;

public:
    std::string message() const override {
        std::string msg;
        msg += "pid:";
        msg += std::to_string(_id);
        msg += ", v3f:";
        msg += _v3f.message();
        return msg;
    }

};


}
