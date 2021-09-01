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
        // when step = 1
        // TODO: find points in surround_cellar or in this cellar; fill ids;
        return std::unordered_set<int>();
    }
    
    std::unordered_set<int>
    get_surround_cellar_grid_ids(int steps = 1) {
        
        // when step = 1
        auto sr1 = vector<int, 2>(_v2i.u - 1, _v2i.v);
        auto sr2 = vector<int, 2>(_v2i.u, _v2i.v - 1);
        auto sr3 = vector<int, 2>(_v2i.u + 1, _v2i.v);
        auto sr4 = vector<int, 2>(_v2i.u, _v2i.v + 1);
        auto sr5 = vector<int, 2>(_v2i.u + 1, _v2i.v - 1);
        auto sr6 = vector<int, 2>(_v2i.u - 1, _v2i.v + 1);

        // TODO: find map[v] = id; fill ids;
        
        return std::unordered_set<int>();
    }
    
    friend bool operator==(const hexagon & lhs, const hexagon & rhs) {
        return lhs._id == rhs._id || lhs._v2i == rhs._v2i;
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
