//
//  aoi_square.hpp
//  cogame
//
//  Created by Cosmo Julis on 8/27/21.
//

#pragma once
#include "base.hpp"
#include <unordered_set>


namespace co::aoi {


class square : public base::description {
public:
    square(int id = 0) : _id(id) { }
    
    int get_id() const {
        return _id;
    }
    
    std::unordered_set<int> get_point_ids(int steps = 1) {
        return std::unordered_set<int>();
    }
    
    std::unordered_set<int>
    get_surround_cellar_grid_ids(int steps = 1) {
        return std::unordered_set<int>();
    }
    
private:
    int _id;

public:
    std::string message() const override {
        return "";
    }
    
};


}
