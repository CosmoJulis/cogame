//
//  cellar_grid.hpp
//  cogame
//
//  Created by Cosmo Julis on 8/27/21.
//

#pragma once
#include "base.hpp"
#include "vector.hpp"
#include <unordered_set>


namespace co::aoi {


class hexagon : public base::description {
public:
    hexagon(int id = 0, int u = 0, int v = 0)
    :
    _id(id),
    _v2i(vector<int, 2>(u, v))
    { }
    
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
    vector<int, 2> _v2i;
    
public:
    std::string message() const override {
        return "";
    }
    
};


}
