//
//  vector.hpp
//  AreaOfInterest
//
//  Created by Cosmo Julis on 8/27/21.
//

#pragma once

#include <initializer_list>
#include "base.hpp"


namespace co {


template <typename T, int count = 2>
class vector : public base::description {
public:
    T & x = operator[](0);
    T & y = operator[](1);
    T & z = operator[](2);
    
    T & a = x;
    T & b = y;
    T & c = z;
    T & d = operator[](3);
    
    template<typename...Args>
    vector(const Args&...args) {
        constexpr size_t argsCount = sizeof...(args);
        if (argsCount > 0) {
            int _index = 0;
            (void)std::initializer_list<T>{
                static_cast<T>(([&args, &_index, this] {
                    tc[_index] = args;
                    _index++;
                }(), NULL))...
            };
        }
    }
    
    vector(std::initializer_list<T> list = {}) {
        int _index = 0;
        for (auto & t : list) {
            tc[_index] = t;
            _index++;
        }
    }

    void operator=(vector & v) {
        for (int i = 0; i < count; i++) {
            operator[](i) = v.operator[](i);
        }
    }
    
    T & operator[](size_t index) {
        if (index < count) {
            return tc[index];
        } else {
            return get_default();
        }
    }
    
    const T & operator[](size_t index) const {
        if (index < count) {
            return tc[index];
        } else {
            return get_default();
        }
    }

    
private:
    T & get_default() const {
        static T _default = T();
        return _default;
    }
    
    T tc[count] = {};
    
public:
    std::string message() const override {
        std::string msg;
        msg += "{";
        for (int i = 0; i < count; i++) {
            msg += std::to_string(operator[](i));
            if (i != count - 1) {
                msg += ",";
            }
        }
        msg += "}";
        return msg;
    }
};


}
